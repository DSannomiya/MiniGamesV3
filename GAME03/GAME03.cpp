#include "../../libOne/inc/libOne.h"
#include "../MAIN/LEVEL_FACTORY.h"
#include "../MAIN/MAIN.h"
#include "GAME03.h"

void GAME03::create()
{
	//ここでは主に画像と音データを読み込む

	//初期値設定はInit()関数などを作ってそこで行ったほうが良い。
	//シンプルなゲームなら次のように、ここで行ってもよい。
	Px = width / 2;
	Py = height / 2;
	Radius = 200;
}

void GAME03::destroy()
{
	//create()でnewした場合はここでdeleteすること
}

void GAME03::proc()
{
	//ここはメインループから呼び出されている!!!!!
	
	//描画--------------------------------------------------
	clear(255, 255, 255);
	//円
	strokeWeight(50);
	stroke(0);
	fill(255, 0, 0);
	circle(Px, Py, Radius * 2);
	//テキスト情報
	fill(0);
	textSize(100);
	text("Enterでメニューに戻る", 0, height);
	print(3);
	//メニューに戻る------------------------------------------
	if (isTrigger(KEY_ENTER)) {
		main()->backToMenu();
	}
}

