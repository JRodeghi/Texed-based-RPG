/*
 * Items.h
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#ifndef ITEMS_H_
#define ITEMS_H_

#include <iostream>

namespace Item {

class Items {
private:
	std::string name;
public:
	Items(std::string);
	std::string retType();
	virtual ~Items();
};

} /* namespace Item */

#endif /* ITEMS_H_ */
