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
	Stats[0] = 0;
	Stats[1] = 0;
	Stats[2] = 0;
	Stats[3] = 0;
	Stats[4] = 0;
}

Bandit::~Bandit() {
	// TODO Auto-generated destructor stub
}

} /* namespace Combat */
