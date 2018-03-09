/*
 * Player.h
 *
 *  Created on: Mar 8, 2018
 *      Author: joel
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include "Items.h"
#include "Combat/Weapons/weapon.h"

namespace Player {

class Player {
private:
	std::string Race;
	double Health;
	int Stats[5];
	Item::Items* Invintory[20];
	Item::Weapon* WepInvintory[5];
	double UnarmedAtck;

	double UnarmedCalc();
public:
	Player();
	void retStats();
	double retHealth();
	int retStat(int);
	void addItem(Item::Items);
	void addWeapon(Item::Weapon);
	Item::Weapon* retWeapon();
	virtual ~Player();
};

} /* namespace Player */

#endif /* PLAYER_H_ */
