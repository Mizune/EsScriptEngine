#pragma once
#include <string>
using namespace std;
class ImageView
{
public:
	ImageView(int x, int y,string name);
	~ImageView();
	int X;
	int Y;
	string ImgFileName;
};

