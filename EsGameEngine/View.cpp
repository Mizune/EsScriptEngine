#include "View.h"
#include "TextBox.h"
#include "DxLib.h"
#include "Const.h"
#include <string>


View::View(){
	drawBackground();
}



// ContentTextView,NameView‚Ì“ñ‚Â‚ÌˆÊ’uî•ñ‚ğ‚Á‚Ä‚é
using namespace std;

int drawTextContents(int x, int y, char* text){
	return 0;
}

int drawTextContents(TextBox value){
	return 0;
}

int drawNameText(int x, int y, char* name){
	return 0;
}

int drawNameText(TextBox value){
	return 0;
}

int drawBackground()
{
	string fileName ="image/bg.png";
	int Handle = LoadGraph(fileName.c_str());
	DrawGraph(0, 0, Handle, TRUE);
	return 0;
}

int drawBackground(ImageView img)
{	
	string fileName ="image/"+ img.ImgFileName;
	
int Handle = LoadGraph(fileName.c_str);
	DrawGraph(0, 0, Handle, TRUE); 
}
int drawBackgroundWithAnim(ImageView img, int animcode){

	switch (animcode)
	{
	case 0:
		
		break;
	default:
		break;
	}

	return 0;
}
int changeCharacter(ImageView character){

	return 0;
}
int changeBackground(ImageView img){
	
	return 0;
}