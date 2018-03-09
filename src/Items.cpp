/*
 * Items.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#include "Items.h"

namespace Item {

Items::Items(std::string n) {
	// TODO Auto-generated constructor stub
	name = n;

}

std::string Items::retType() {
	return name;
}

Items::~Items() {
	// TODO Auto-generated destructor stub
}

} /* namespace Item */
