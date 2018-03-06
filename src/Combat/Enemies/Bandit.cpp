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
	Enemy::addItem("Sword");
	Enemy::addItem("Leather Armor");
}

double Bandit::Attack() {
	for(int k = 0;k <= 19;k++)
	{

	}
}

Bandit::~Bandit() {
	// TODO Auto-generated destructor stub
}

} /* namespace Combat */
