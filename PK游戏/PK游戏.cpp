﻿#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include "hero.h"
#include "Monster.h"
#include "weapon.h"
#include "Knife.h"
#include "DragonSword.h"
#include <ctime>
using namespace std;
void play()
{
	//创建怪物
	Monster * monster = new Monster;
	//创建英雄
	Hero * hero = new Hero;

	//创建武器
	Weapon * knife1 = new Knife;
	cout<<"++++++++++++++"<<knife1->m_WeaponName<< knife1->m_BaseDamage << endl;
	//system("pause");
	Weapon * dragon = new DragonSword;
	cout << "++++++++++++++" << dragon->m_WeaponName << dragon->m_BaseDamage << endl;
	//让用户选择武器
	cout << "请选择武器：" << endl;
	cout << "1.赤手空拳" << endl;
	cout << "2.小刀" << endl;
	cout << "3.屠龙刀" << endl;

	int oper;

	cin >> oper;

	switch(oper)
	{
	case 1:
		cout << "你真牛，你还是太年轻！" << endl;
		break;
	case 2:
		cout << "---------" << knife1->m_WeaponName << "---------" << endl;
		hero->EquipWeapon(knife1);
		break;
	case 3:
		hero->EquipWeapon(dragon);
		break;

	}

	getchar();//输入缓冲区里有个回车，多获取一次值
	int round = 1;
	while (true)
	{
		getchar();
		system("cls");
		cout << "---当前第" << round << "回合开始-----" << endl;

		
		hero->Attack(monster);
		if (monster->m_Hp <= 0)
		{
			cout << "怪物" << monster->m_Name << "已挂，顺利通关" << endl;
			break;
		}
		monster->Attack(hero);
		if (hero->m_Hp <= 0)
		{
			cout << "英雄" << hero->m_Name << "已挂，游戏结束" << endl;
			break;
		}
		cout << "英雄" << hero->m_Name << "剩余血量：" << hero->m_Hp << endl;
		cout << "怪物" << monster->m_Name << "剩余血量：" << monster->m_Hp << endl;
		round++;
	}

	delete monster;
	delete hero;
	delete knife1;
	delete dragon;
}

int main() {
	srand((unsigned int)time(NULL));
	play();
	system("pause");
	return EXIT_SUCCESS;
}