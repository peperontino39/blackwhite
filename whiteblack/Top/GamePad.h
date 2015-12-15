#pragma once

#include "Top.h" 

//////�傿���
/////�����͑傿���̍D���Ɏg���Ă�����
//////�ŏI�I�ɂ�GamePad::PushBoton('1')�Ƃ��ɂȂ���
//������₷���Ȃ��Ă�΂�����

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
