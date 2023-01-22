#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;



/*
* 
// Image
int main() {

	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0); // don't close until we press close button

}

*/

// Video
int main() {
	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);
	Mat img;

	// Read image in video 1-by-1
	while (true) {

		cap.read(img);
		imshow("Image", img);
		waitKey(1); // delay (in ms)
	}



}