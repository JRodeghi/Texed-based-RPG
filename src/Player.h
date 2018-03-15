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
	std::string Name;
	std::string Race;
	double Health;
	int Stats[5];
	Item::Items* Invintory[20];
	Item::Weapon* WepInvintory[5];
	double UnarmedAtck;

	bool isMale;

	double UnarmedCalc();
public:
	Player(std::string,std::string,bool);
	std::string retName();
	bool retGen();
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
