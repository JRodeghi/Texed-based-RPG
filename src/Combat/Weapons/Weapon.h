/*
 * Weapon.h
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#ifndef COMBAT_WEAPONS_WEAPON_H_
#define COMBAT_WEAPONS_WEAPON_H_

#include <iostream>
#include "../../Items.h"

namespace Item {

class Weapon : public Items{
private:
	//std::string type;
	std::string magicDamageType;
	bool isMagic;
	double dmg;
	double magicDmg;
	int health;

	std::string* WeaponList;
public:
	Weapon();
	Weapon(std::string,double,double,std::string,bool);
	double Attack();
	void retStats();
	std::string* retWeps();
	virtual ~Weapon();

};

} /* namespace Combat */

#endif /* COMBAT_WEAPONS_WEAPON_H_ */
