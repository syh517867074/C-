#include "DragonSword.h"

DragonSword::DragonSword()
{
	this->m_BaseDamage = 20;
	this->m_WeaponName = "ÍÀÁú±¦µ¶";
	this->suckRate = 20;
	this->holdrate = 30;
	this->critRate = 35;

}

int DragonSword::getBaseDamage()
{
	return this->m_BaseDamage;
}

int DragonSword::getSuckBlood()
{
	if (isTrigger(suckRate))
	{
		return this->m_BaseDamage * 0.5; //°´ÕÕÎäÆ÷»ù´¡ÉËº¦Ò»°ëÎüÑª
	}
	return 0;
}

bool DragonSword::getHold()
{
	if (isTrigger(holdrate))
	{
		return true;
	}
	return false;
}

bool DragonSword::getCrit()
{
	if (isTrigger(critRate))
	{
		return true;
	}
	return false;
}

bool DragonSword::isTrigger(int rate)
{
	//Ëæ»ú0~100µÄÊı×Ö

	int num = rand() % 100 + 1;

	if (num < rate)
	{
		return true;
	}
	return false;
}
