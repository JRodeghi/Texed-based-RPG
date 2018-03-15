/*
 * Chapter1.h
 *
 *  Created on: Mar 13, 2018
 *      Author: joel
 */

#ifndef CHAPTER1_CHAPTER1_H_
#define CHAPTER1_CHAPTER1_H_

#include <iostream>
#include "../Player.h"

namespace chapter {

class Chapter1 {
private:
	bool isPlayerMale;
public:
	Chapter1(Player::Player*);
	virtual ~Chapter1();
};

} /* namespace chapter */

#endif /* CHAPTER1_CHAPTER1_H_ */
