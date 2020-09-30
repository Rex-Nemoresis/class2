#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;/*
int main()
{
    VideoCapture cap;

    cap.open(0);

    if (!cap.isOpened())
    {
        std::cout << "" << std::endl;
        return -1;
    }


    double fps = cap.get(CAP_PROP_FPS);
    std::cout << "fps" << fps << std::endl;
    while (1)
    {
        cv::Mat frame;
        bool rSucess = cap.read(frame);
        if (!rSucess)
        {
            std::cout << "" << std::endl;
            break;
        }
        else
        {
            cv::imshow("frame", frame);
        }
        waitKey(0);
       
    }
}*/