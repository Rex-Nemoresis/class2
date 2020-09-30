#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main() {
	cv::Mat imgA(80, 80, CV_8UC3, Scalar(255,255,255));
	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	circle(imgA, pt, 5, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::imshow("circle", imgA);
	waitKey(0);
}