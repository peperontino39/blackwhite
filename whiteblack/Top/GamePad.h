#pragma once

#include "Top.h" 

//////大ちゃん
/////ここは大ちゃんの好きに使っていいよ
//////最終的にはGamePad::PushBoton('1')とかになって
//分かりやすくなってればいいよ

class Pad_Base
{
public:
	Pad_Base()
		: gamepad_num(env.numGamePad())
		, pad(env.gamePad(0))
	{

	}
	bool isPressButton(const int button)
	{
		if (gamepad_num)
		{
			if (pad.isPressButton(button))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	bool isPushButton(const int button)
	{
		if (gamepad_num)
		{
			if (pad.isPushButton(button))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
private:
	size_t gamepad_num;
	GamePad& pad;
};

class Pad{
public:
	static Pad_Base& Get()
	{
		static Pad_Base pad;
		return pad;
	}
};
