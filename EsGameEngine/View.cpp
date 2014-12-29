#include "View.h"
#include "DxLib.h"
#include "Const.h"
#include <string>

//
//View::View(){
//
//}
// ContentTextView,NameView‚Ì“ñ‚Â‚ÌˆÊ’uî•ñ‚ğ‚Á‚Ä‚é
using namespace std;

int View::drawTextContents(int x, int y, char* text){
	return 0;
}

int View::drawTextBox(TextBox value){
	return 0;
}

int View::drawText(int x, int y, string content){
	return 0;
}

int View::drawNameTextBox(TextBox value){
	return 0;
}

int View::drawBackground()
{
	string fileName ="image/bg.png";
	int Handle = LoadGraph(fileName.c_str());
	DrawGraph(0, 0, Handle, TRUE);
	return 0;
}

int View::drawBackground(ImageView img)
{	
	string fileName ="image/"+ img.ImgFileName;
	
	int Handle = LoadGraph(fileName.c_str());
	DrawGraph(0, 0, Handle, TRUE); 
	return 0;
}
int View::drawBackgroundWithAnim(ImageView img, int animcode){

	switch (animcode)
	{
	case 0:
		
		break;
	default:
		break;
	}

	return 0;
}
int View::changeCharacter(ImageView character){

	return 0;
}
int View::changeBackground(ImageView img){
	
	return 0;
}