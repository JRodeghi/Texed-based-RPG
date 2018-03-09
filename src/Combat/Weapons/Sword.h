/*
 * Sword.h
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#ifndef COMBAT_WEAPONS_SWORD_H_
#define COMBAT_WEAPONS_SWORD_H_

#include "Weapon.h"
#include <iostream>

namespace Item {

class Sword: public Weapon {
public:
	Sword();
	Sword(double ,double ,std::string ,bool);
	virtual ~Sword();
};

} /* namespace Combat */

#endif /* COMBAT_WEAPONS_SWORD_H_ */
