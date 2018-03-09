/*
 * Enemy.h
 *
 *  Created on: Mar 5, 2018
 *      Author: Joel
 */

#ifndef COMBAT_ENEMIES_ENEMY_H_
#define COMBAT_ENEMIES_ENEMY_H_
#include <iostream>
#include "../../Items.h"
#include "../Weapons/Weapon.h"
using namespace Item;

namespace Combat {

class Enemy {
private:
	std::string Race;
	double Health;
	int Stats[5];
	Item::Items* Invintory[20];
	Item::Weapon* WepInvintory[5];
	//const int InvintorySize = 20;
	double UnarmedAtck;

	double UnarmedCalc();

public:
	Enemy();
	Enemy(double, int[],std::string);
	void retStats();
	double retHealth();
	int retStat(int);
	void addItem(Item::Items);
	void addWeapon(Item::Weapon);
	Item::Weapon* retWeapon();
	virtual ~Enemy();
};

} /* namespace Enemy */

#endif /* COMBAT_ENEMIES_ENEMY_H_ */
