#include "ImageView.h"
#include <string>


using namespace std;


ImageView::ImageView(int x,int y,string name)
{
	X = x;
	Y = y;
	ImgFileName = name;
}


ImageView::~ImageView()
{
}


