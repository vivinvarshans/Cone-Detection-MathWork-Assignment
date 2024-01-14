# Solution to MATLAB and Simulink Challenge project 248 Cone Detection for Formula Student Driverless Competition

[Program link](https://github.com/mathworks/MATLAB-Simulink-Challenge-Project-Hub/tree/main/projects/Cone%20Detection%20for%20Formula%20Student%20Driverless%20Competition)


# Project details
The ability to detect cones in the scene is crucial for autonomous driving applications, such as autonomous racing, as it enables the vehicle to navigate through a course safely and efficiently. In the Formula Student driverless competitions, the teams are required to navigate through a series of cones, and detecting the cones accurately can give the team a competitive edge. In this project, we will learn how to use MATLAB® and Simulink® to detect cones in a virtual environment, which can help us gain valuable experience in autonomous driving.
In this project, we will use the Generate Skidpad Test model introduced in R2023a in the Vehicle Dynamics Blockset™. The skidpad model includes a reference path, driver, vehicle, and visualization aides. The vehicle’s dynamics response can be visualized using photorealistic 3D scenes created with Unreal Engine in the Simulation 3D Viewer.
- Yolov2 algorithm is used to detect cones from the "3D Simulation Camera" output.
- Data set is Trained using MATLAB videolabbler tools and further training script
- Trained data is used in "Deep learning object detector" block and ouput is viewed using "video viewer block".
- Generate Skipad Test model is used from Mathworks Files.

# Tutorial video

[video link](https://youtu.be/M3Bs8xnoTd4?feature=shared)

# How to run 
- Detector file is there already and cone detection can be done by running "main.mlx" file. if you wish to train your own detector file follow below steps
   - 1 . Go inside "Train Detector" folder and run detector.mlx file to create the detector file.
   - 2 . Copy 'yolov2ConeDetector' to main directory
   - 3 . Open "main.mlx" and run the file.

# Output
![Screenshot 2024-01-14 224555](https://github.com/vivinvarshans/Cone-Detection-MathWork-Assignment/assets/81176289/a065704d-8cc8-4554-9e7c-99bf6900fe57)
![Screenshot 2024-01-14 224645](https://github.com/vivinvarshans/Cone-Detection-MathWork-Assignment/assets/81176289/3101ae84-960f-4592-9d0b-2bfecf80e6b4)

  
# Reference
- https://in.mathworks.com/help/vdynblks/ug/generate-skidpad-test-course.html


