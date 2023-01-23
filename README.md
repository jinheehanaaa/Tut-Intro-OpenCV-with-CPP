# Objective
- Learn OPENCV with C++

# Download OPENCV 
- Install OPENCV & store in C root directory
- Add environment variable => C:\opencv\build\x64\vc16\bin

# Setup
## Create Empty Project
## Property Setting
- Include Directories => C:\opencv\build\include
- Library Directories => C:\opencv\build\x64\vc16\lib
- Linker Input => opencv_world470d.lib


# Chapter 1
- "Mat" data type for handling the images.
- You can import image, video, and webcam.

# Chapter 2
- Basic Functions for detecting object from image
- Image
- Image Blur
- Image Canny
- Image Dilation
- Image Erode

# Chapter 3
- We need to resize & crop for CPU to process region of interest

# Chapter 4
- Draw Shapes and Text 
- This is handy for drawing bounnding box aroun the object

# Chapter 5
- Warp Perspective

# Chapter 6: Color Detection
- HSV (Hue, Saturation, Value)
- Trackbar with createTrackbar function

# Chapter 7: Shapes Detection

- Dilation is much better for detecting object rather than using with canny
- Unlike Python, we need to define data type for contours & hierarchy
- Add filter for certain value
- Bounding box (peri) around the object

# Library
- [OPENCV 4.8]

# Resources
- [Tutorial](https://youtu.be/2FYm3GOonhk)
- [Website](https://www.computervision.zone/courses/opencv-cv/)
- [Official GitHub](https://youtu.be/2FYm3GOonhk)
- [OPENCV](https://github.com/opencv/opencv/releases)