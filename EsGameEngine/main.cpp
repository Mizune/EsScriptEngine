#include "DxLib.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	const int SCREEN_WIDTH = 1280;
	const int SCREEN_HEIGHT = 720;
	const int DX_COLOR_BIT_32 = 32;
	const int DX_COLOR_BIT_16 = 16;
	ChangeWindowMode(TRUE);

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT,DX_COLOR_BIT_16);
	

	SetMainWindowText("Game Title");

	// io でconfigファイル読み込み＞SetGraphModeでサイズを拾って決定　描画と同時にConfigクラスをインスタンス化　拾ったデータで初期化

	if (DxLib_Init() == -1)	// ＤＸライブラリ初期化処理
	{
		return -1;	// エラーが起きたら直ちに終了
	}
	// SetDrawScreen(DX_SCREEN_BACK);


	/*while (CheckHitKey(KEY_INPUT_ESCAPE) == 0 && ProcessMessage() == 0)
	{
		for (int i = 0; i < 255; i++)
		{
			DrawPixel(i, i, GetColor(255, 255, 255));
		}
		ScreenFlip();
	}*/
	
	int i, j, w, h, r, g, b, a;
	
	int handle = LoadSoftImage("bg.jpg");
	GetSoftImageSize(handle, &w,&h);

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			GetPixelSoftImage(handle, j, i, &r,&g, &b, &a);
			DrawBox(j * 3, i * 3, j * 3 + 3, i * 3 + 3,GetColor(r,g,b),TRUE);
		}
	}
	DeleteSoftImage(handle);


	int Cr = GetColor(200,200,200);

	DrawString(SCREEN_WIDTH / 5 , SCREEN_HEIGHT / 5 * 4, "HogeHoge", Cr);


	WaitKey();

	


	DxLib_End();		// ＤＸライブラリ使用の終了処理

	return 0;		// ソフトの終了
}