#pragma once
#include <iostream>
#include "weapon.h"
#include "Monster.h"
#include<string>
using namespace std; 
class Monster;                                                        
class  Hero
{
public:
	Hero();
	string m_Name; //����
	int m_Atk; //������
	int m_Def; //������
	int m_Hp; //Ѫ��
	Weapon * weapon; //����

	void EquipWeapon(Weapon *weapon);

	void Attack(Monster * monster);
};

