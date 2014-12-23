#pragma once
#include "ImageView.h"
#include "TextBox.h"
class View
{
public:
	View();
	TextBox charName;
	TextBox contentsLine1,contentsLine2,contentsLine2;
	TextBox notificationView;

	ImageView charSnap;
	ImageView backgroundImage;
	ImageView charStandLeft;
	ImageView charStandRight;
	ImageView charStandCenter;
	int drawTextContents(int x, int y, char* text);
	int drawCharacter(ImageView character);
	int drawBackground();
	int drawBackground(ImageView img);
	int drawBackgroundWithAnim(ImageView img, int animcode);
	int changeCharacter(ImageView character);
	int changeBackground(ImageView img);
};

