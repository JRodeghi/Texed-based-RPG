/*
 * Weapon.h
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#ifndef COMBAT_WEAPONS_WEAPON_H_
#define COMBAT_WEAPONS_WEAPON_H_

#include <iostream>

namespace Combat {

class Weapon {
private:
	std::string type;
	std::string magicDamageType;
	bool isMagic;
	double dmg;
	double magicDmg;
	int health;
public:
	Weapon(std::string,double,double,std::string,bool);
	double Attack();
	void retStats();
	std::string retType();
	virtual ~Weapon();

};

} /* namespace Combat */

#endif /* COMBAT_WEAPONS_WEAPON_H_ */
