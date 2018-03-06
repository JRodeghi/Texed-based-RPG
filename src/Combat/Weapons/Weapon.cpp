/*
 * Weapon.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#include "Weapon.h"

namespace Combat {

Weapon::Weapon(std::string t,double d,double md ,std::string mt,bool m) {
	// TODO Auto-generated constructor stub
	type = t;
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

}

double Weapon::Attack() {
	return dmg + magicDmg;
}

void Weapon::retStats() {

	std::cout << "Weapon Health" << health << std::endl;
	std::cout << "Weapon type" << type << std::endl;
	std::cout << "Weapon Damage" << dmg << std::endl;
	std::cout << "Is weapon magic" << isMagic << std::endl;
	if(isMagic)
	{
		std::cout << "Magic Type" << magicDamageType <<std::endl;
		std::cout << "Magic Damage" << magicDmg <<std::endl;
	}

}

std::string Weapon::retType() {
	return type;
}

Weapon::~Weapon() {
	// TODO Auto-generated destructor stub
}



} /* namespace Combat */
