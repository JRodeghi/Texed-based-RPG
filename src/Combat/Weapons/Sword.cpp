/*
 * Sword.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#include "Sword.h"

namespace Item {

Sword::Sword():Weapon("Sword",10,0,"None",false)
{

}

Sword::Sword(double d,double md ,std::string mt,bool m):Weapon("Sword",d,md,mt,m) {
	// TODO Auto-generated constructor stub

}

Sword::~Sword() {
	// TODO Auto-generated destructor stub
}

} /* namespace Combat */
