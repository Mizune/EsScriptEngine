#pragma once
class ImageView
{
public:
	ImageView(int x, int y, char* name);
	~ImageView();
	int X;
	int Y;
	char* ImgFileName;
};

