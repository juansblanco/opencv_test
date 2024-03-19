#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int main(int argc, char** argv)
{
	cv::String path("C:\\Users\\Juan\\Desktop\\rana.png");
	// Read the image file
	cv::Mat image = cv::imread(path);

	// Check for failure
	if (image.empty()) 
	{
		std::cout << "Could not open or find the image" << std::endl;
		std::cin.get(); //wait for any key press
		return -1;
	}

	cv::String windowName = "Frog"; //Name of the window

	cv::namedWindow(windowName); // Create a window

	cv::imshow(windowName, image); // Show our image inside the created window.

	cv::waitKey(0); // Wait for any keystroke in the window

	cv::destroyWindow(windowName); //destroy the created window

	return 0;
}
