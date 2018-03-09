/*
 * Mace.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#include "Mace.h"

namespace Item {

Mace::Mace():Weapon("Mace",10,0,"None",false){
	// TODO Auto-generated constructor stub

}

Mace::Mace(double d,double md ,std::string mt,bool m):Weapon("Mace",d,md,mt,m){
}

Mace::~Mace() {
	// TODO Auto-generated destructor stub
}

} /* namespace Item */
