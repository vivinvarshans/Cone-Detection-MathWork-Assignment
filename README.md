# Cone Detection for Formula Student Competion

## Instructions

- Go inside "Train Detector" folder and run detector.mlx file to create the detector file.
- Open "main" run the file.
- Let the simulation run once.
- if cone detection is not visible at first run then do the below setps.(SEE "Configurations" Video)
- 	1.After running once double-click on "Formula Student Vehicle" to change Vehicle type to "Game Engine Physics"
- 	2.Double-Click on "3D Simulation Camera" to change Parent name to "SimlinkVehicle1" and Mount Location to "Roll bar centre"
- 	3.Double-Click on "Deep learning toolbox" to change the Detector path to location of "yolov2ConeDetector.mat"
- 	4.Run the simulink model to get output

## About

- Yolov2 algorithm is used to detect cones from the "3D Simulation Camera" output.
- Data set is Trained using MATLAB videolabbler tools and further training script
- Trained data is used in "Deep learning object detector" block and ouput is viewed using "video viewer block".
- Generate Skipad Test model is used from Mathworks Files.

## Resources

- https://in.mathworks.com/help/vdynblks/ug/generate-skidpad-test-course.html



