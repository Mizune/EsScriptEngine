#pragma once
#include <string>
using namespace std;
class TextBox
{
public:
	int X;
	int Y;
	string textValue;
	TextBox(int x, int y);
	int initBox(int x, int y);
	int ChangeText(string text);
};

