/*
 * Chapter1.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: joel
 */

#include "Chapter1.h"

namespace chapter {

Chapter1::Chapter1(Player::Player* player) {
	// TODO Auto-generated constructor stub

	isPlayerMale = player->retGen();

	std::cout << "You are having a sweet dream one of rolling hills and peace." << std::endl;
	std::cout<< "OH..How long has it been since you knew peace it must be a year or two now" << std::endl;
	std::cout<< "The war all started over ";
	if(player->retGen())
	{
		std::cout << "your sister." << std::endl;
	}
	else
	{
		std::cout << "you." << std::endl;
	}

}

Chapter1::~Chapter1() {
	// TODO Auto-generated destructor stub
}

} /* namespace chapter */
