#pragma once
class TextBox
{
public:
	int X;
	int Y;
	char *TextValue;
	TextBox(int x, int y);
	~TextBox();
	int initBox(int x, int y);
	int ChangeText(char *text);
};
