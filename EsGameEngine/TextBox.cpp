#include "TextBox.h"


TextBox::TextBox(int x, int y)
{
	X = x;
	Y = y;
}


TextBox::~TextBox()
{

}

int initBox(int x, int y)
{
	TextBox(x, y);
	return 0;
}

int ChangeText(char *text)
{
	//TextValue = text;
	return 0;
}