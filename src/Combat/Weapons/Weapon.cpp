/*
 * Weapon.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#include "Weapon.h"

namespace Item {

Weapon::Weapon():Items("Empty") {
	magicDamageType = " None";
	isMagic = false;
	dmg = 0;
	magicDmg = 0;
	health = 0;

	WeaponList = new std::string[4];

	WeaponList[0] = "Sword";
	WeaponList[1] = "Axe";
	WeaponList[2] = "Mace";
	WeaponList[3] = "GreatSword";
}

Weapon::Weapon(std::string t,double d,double md ,std::string mt,bool m):Items(t) {
	// TODO Auto-generated constructor stub
	dmg = d;
	if(m == true)
	{
		magicDmg = md;
		magicDamageType = mt;
		isMagic = m;

	}
	else
	{
		magicDmg = 0;
		magicDamageType = "None";
		isMagic = false;

	}
		health = 100;

		WeaponList = new std::string[4];

		WeaponList[0] = "Sword";
		WeaponList[1] = "Axe";
		WeaponList[2] = "Mace";
		WeaponList[3] = "GreatSword";

}

double Weapon::Attack() {
	return dmg + magicDmg;
}

void Weapon::retStats() {

	std::cout << "Weapon Health" << health << std::endl;
	std::cout << "Weapon type" << Items::retType() << std::endl;
	std::cout << "Weapon Damage" << dmg << std::endl;
	std::cout << "Is weapon magic" << isMagic << std::endl;
	if(isMagic)
	{
		std::cout << "Magic Type" << magicDamageType <<std::endl;
		std::cout << "Magic Damage" << magicDmg <<std::endl;
	}

}

std::string* Weapon::retWeps() {
	return WeaponList;
}

Weapon::~Weapon() {
	// TODO Auto-generated destructor stub
}


} /* namespace Combat */


