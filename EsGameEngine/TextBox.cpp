#include "TextBox.h"


TextBox::TextBox(int x, int y)
{
	X = x;
	Y = y;
}


int TextBox::initBox(int x, int y)
{
	TextBox(x, y);
	return 0;
}

int TextBox::ChangeText(string text)
{
	TextBox::textValue = text;
	return 0;
}