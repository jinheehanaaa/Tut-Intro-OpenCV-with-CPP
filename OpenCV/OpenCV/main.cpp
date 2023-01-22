#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>


using namespace cv;
using namespace std;


// Resize and Crop
int main() {
	string path = "Resources/꼬부기.jpg";
	Mat img = imread(path);
	Mat imgResize, imgCrop;



 	resize(img, imgResize, Size(), 0.1,0.1);

	Rect roi(200, 150, 500, 500); //region of interest
	imgCrop = img(roi);

	imshow("Image", img);
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);


	waitKey(0);
}