load gTruth.mat

if ~isfolder(fullfile("TrainingDataCustomMultiDetect"))
    mkdir TrainingDataCustomMultiDetect 
end

trainingData1 = objectDetectorTrainingData(gTruthRG, 'SamplingFactor',1,... 
    'WriteLocation', 'TrainingDataCustomMultiDetect'); % red cones and green cones 
trainingData2 = objectDetectorTrainingData(gTruthYY, 'SamplingFactor',1,...
    'WriteLocation', 'TrainingDataCustomMultiDetect'); % yellow cone pairs 
trainingData = [trainingDatal; trainingData2];

trainingData(1:4,:)

rng(0);

shuffledIndices = randperm(height(trainingData));
idx = floor(0.8 * length(shuffledIndices));
trainingIdx = 1:idx;
testIdx = trainingIdx(end)+1: length(shuffledIndices);

trainingDataset = trainingData(shuffledIndices(trainingIdx),:);
testDataSet = trainingData(shuffledIndices(testIdx),:);

inputSize = [416 416 3];
inputLayer = imageInputLayer(inputSize, 'Name','input','Normalization','none');

filterSize = [3 3];

middlelayers = [
    convolution2dLayer(filterSize, 16, 'Padding', 1, 'Name', 'conv_1',...
    'WeightsInitializer', 'narrow-normal')
    batchNormalizationLayer('Name', 'BN1')
    reluLayer('Name', 'relu_1')
    maxPooling2dLayer(2, 'Stride', 2, 'Name', 'maxpool1')
    convolution2dLayer(filterSize, 32, 'Padding', 1, 'Name', 'conv_2',...
    'WeightsInitializer', 'narrow-normal')
    batchNormalizationLayer('Name', 'BN2')
    reluLayer('Name', 'relu_2')
    maxPooling2dLayer(2, 'Stride', 2, 'Name', 'maxpool2')
    convolution2dLayer(filterSize, 64, 'Padding', 1, 'Name', 'conv_3',...
    'WeightsInitializer', 'narrow-normal')
    batchNormalizationLayer('Name', 'BN3')
    reluLayer('Name','relu_3')
    maxPooling2dLayer(2, 'Stride', 2, 'Name', 'maxpool3')
    convolution2dLayer(filterSize, 128, 'Padding', 1, 'Name', 'conv_4',...
    'WeightsInitializer', 'narrow-normal')
    batchNormalizationLayer('Name', 'BN4')
    reluLayer('Name', 'relu_4')
    ];
lgraph = layer([inputLayer; middlelayers]);
numClasses = size(trainingData,2)-1;

trainingData11 = boxLabelDatastore(trainingData(:,2:end));

numAnchors = 10;
[anchorBoxes,meaIoU] = estimateAnchorBoxes(trainingData11,numAnchors);

lgraph = yolov2Layers(inputSize,numClasses,anchorBoxes,lgraph,'relu_4');


doTraining = true;

if doTraining
    rng(0);

    options = trainingOptions('sgdm', ...
        'InitialLearnRate', 0.001, ...
        'Verbose', true, ...
        'MiniBatchSize', 16,...
        'MaxEpochs',100, ...
        'Shuffle','every-epoch', ...
        'VerboseFrequency', 50, ...
        'ExecutionEnvironment', 'auto',...
        'Plots',"training-progress");
    [yolov2ObjectDetector, info] = trainYOLOv2ObjectDetector(trainingDataset,lgraph,options);
else
    load('yolov2ConeDetector.mat');
end