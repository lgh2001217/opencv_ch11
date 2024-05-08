#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

//실습과제 1
/*
int main(void)
{
    Mat rect = getStructuringElement(MORPH_RECT, Size(3, 3));
    Mat cross = getStructuringElement(MORPH_CROSS, Size(3, 3));
    Mat ellipse = getStructuringElement(MORPH_ELLIPSE, Size(5, 3));

    cout << "MORPH_RECT" << endl; 
    cout << rect << endl;
    cout << "MORPH_CROSS" << endl; 
    cout<< cross << endl;
    cout << "MORPH_ELLIPSE" << endl; 
    cout << ellipse << endl;

    return 0;
}
*/

// 실습과제 2
/*
int main(void)
{
	Mat src = imread("letterj.png", IMREAD_GRAYSCALE);
	if (src.empty()) { cerr << "Image load failed!" << endl; return -1; }

	Mat bin;
	threshold(src, bin, 165, 255, THRESH_BINARY);

	Mat dst1, dst2;
	dilate(bin, dst1, Mat());
	erode(dst1, dst2, Mat());

	imshow("src", src);
	imshow("bin", bin);
	imshow("erode", dst2);

	waitKey();
	destroyAllWindows();
	return 0;
}
*/

// 실습과제 3
/*
int main(void)
{
	Mat src = imread("letterj2.png", IMREAD_GRAYSCALE);
	if (src.empty()) { cerr << "Image load failed!" << endl; return -1; }
	Mat bin;
	threshold(src, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);
	Mat dst;
	morphologyEx(bin, dst, MORPH_GRADIENT, Mat());

	imshow("src", src);
	imshow("bin", bin);
	imshow("edge", dst);

	waitKey();
	destroyAllWindows();
	return 0;
}
*/

// 실습과제 4
/*
int main() {

    Mat src = imread("car.jpg");
    if (src.empty()) { cerr << "Image load failed!" << endl; return -1; }

    Mat gray;
    cvtColor(src, gray, COLOR_BGR2GRAY);
    Mat blurr;
    blur(gray, blurr, Size(5, 5));
    Mat sobel;
    Sobel(blurr, sobel, CV_8U, 1, 0);
    Mat binary;
    threshold(sobel, binary, 100, 255, THRESH_BINARY);

    Mat str = getStructuringElement(MORPH_RECT, Size(32, 5));
    Mat close;
    morphologyEx(binary, close, MORPH_CLOSE, str);

    imshow("image", src);
    imshow("x축 소벨", sobel);
    imshow("이진화", binary);
    imshow("닫힘 연산", close);

    waitKey(0);
    destroyAllWindows();
    return 0;
}
*/