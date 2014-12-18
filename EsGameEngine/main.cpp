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

	// io ��config�t�@�C���ǂݍ��݁�SetGraphMode�ŃT�C�Y���E���Č���@�`��Ɠ�����Config�N���X���C���X�^���X���@�E�����f�[�^�ŏ�����

	if (DxLib_Init() == -1)	// �c�w���C�u��������������
	{
		return -1;	// �G���[���N�����璼���ɏI��
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

	


	DxLib_End();		// �c�w���C�u�����g�p�̏I������

	return 0;		// �\�t�g�̏I��
}