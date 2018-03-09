/*
 * Mace.h
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#ifndef MACE_H_
#define MACE_H_

#include "Weapon.h"

namespace Item {

class Mace: public Item::Weapon {
public:
	Mace();
	Mace(double ,double ,std::string ,bool);
	virtual ~Mace();
};

} /* namespace Item */

#endif /* MACE_H_ */
