#pragma once
#include <iostream>
#include "weapon.h"
#include<string>
using namespace std;

class DragonSword : public Weapon
{
public:
	DragonSword();
	//��ȡ�����˺�
	virtual int getBaseDamage() ;

	//��ȡ��Ѫ
	virtual int getSuckBlood() ;

	//��ȡ�Ƿ���
	virtual bool getHold() ;

	//��ȡ�Ƿ񱩻�
	virtual bool getCrit() ;

	//��Ѫ�� ������ ������
	int suckRate;
	int holdrate;
	int critRate;

	//��������ж��Ƿ񴥷�
	bool isTrigger(int rate);

};
