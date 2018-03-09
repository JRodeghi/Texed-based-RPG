/*
 * Bandit.cpp
 *
 *  Created on: Mar 5, 2018
 *      Author: joel
 */

#include "Bandit.h"

namespace Combat {

Bandit::Bandit(double h,std::string r):Enemy(h,Stats,r) {
	// TODO Auto-generated constructor stub
	Stats[0] = 7;//Strength
	Stats[1] = 5;//Dexterity
	Stats[2] = 3;//Intelligence
	Stats[3] = 4;// Wisdom
	Stats[4] = 5;//Charisma
	Enemy::addItem(Item::Sword());

	weapons = weps.retWeps();
}

double Bandit::Attack() {
	Item::Weapon* wep;
	wep = new Weapon();
	double dmg;
	while(wep->retType() != "Sword")
	{
		wep = Enemy::retWeapon();
	}
	dmg = wep->Attack()+(Stats[0]/2);
	return dmg;
}

Bandit::~Bandit() {
	// TODO Auto-generated destructor stub
}

} /* namespace Combat */
