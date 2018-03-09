/*
 * Player.cpp
 *
 *  Created on: Mar 8, 2018
 *      Author: joel
 */

#include "Player.h"

namespace Player {

Player::Player() {
	// TODO Auto-generated constructor stub

}

double Player::UnarmedCalc() {
	double multi = 0;
	if(Race == "Human")
	{
		multi = .5;
	}
	if(Race == "Dwarf")
	{
		multi = .75;
	}
	if(Race == "Elf")
	{
		multi = .3;
	}
	if(Race == "Orc")
	{
		multi = .65;
	}
	return Stats[0] * multi;

}

void Player::retStats() {
	std::cout<<"health: " << Health << std::endl;
	std::cout<<"Strength: " << Stats[0] << std::endl;
	std::cout<<"Dexterity: " << Stats[1] << std::endl;
	std::cout<<"Intelligence: " << Stats[2] << std::endl;
	std::cout<<"Wisdom: " << Stats[3] << std::endl;
	std::cout<<"Charisma: " << Stats[4] << std::endl;
	std::cout<<"Unarmed attack: " << UnarmedAtck << std::endl;
}

double Player::retHealth() {
	return Health;
}

int Player::retStat(int s) {
	return Stats[s];
}

void Player::addItem(Item::Items item) {
	int k = 0;
	while(Invintory[k]->retType() != "Empty")
	{
		k++;
	}
	if(Invintory[k]->retType() == "Empty")
	{
		Invintory[k] = &item;
	}
}

void Player::addWeapon(Item::Weapon weapon) {
	int k = 0;
	while(WepInvintory[k]->retType() != "Empty")
	{
		k++;
	}
	if(WepInvintory[k]->retType() == "Empty")
	{
			WepInvintory[k] = &weapon;
	}
}

Item::Weapon* Player::retWeapon() {
	Item::Weapon* wep;
	for(int k = 0;k <= 19;k++)
	{
		if(WepInvintory[k]->retType() == "Sword")
		{
			wep = WepInvintory[k];
			k = 20;
		}
	}
	return wep;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}


} /* namespace Player */
