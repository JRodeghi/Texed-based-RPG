/*
 * Player.cpp
 *
 *  Created on: Mar 8, 2018
 *      Author: joel
 */

#include "Player.h"

using namespace Item;

namespace Player {

Player::Player(std::string n,std::string r,bool gen) {
	// TODO Auto-generated constructor stub
	Name = n;
	Race = r;
	Health = 100;

	Stats[0] = 3;//Strength
	Stats[1] = 5;//Dexterity
	Stats[2] = 8;//Intelligence
	Stats[3] = 5;// Wisdom
	Stats[4] = 5;//Charisma

	for(int k = 0; k <= 19; k++)
	{
		Invintory[k] = new Items("Empty");
	}

	for(int k = 0; k <=19; k++)
	{
		WepInvintory[k] = new Weapon();
	}

	UnarmedAtck = UnarmedCalc();

	isMale = gen;

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
	std::cout<<"Name: " << Name << std::endl;
	std::cout<<"Race: " << Race << std::endl;
	std::cout<<"Health: " << Health << std::endl;
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

std::string Player::retName() {
	return Name;
}

bool Player::retGen() {
	return isMale;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}


} /* namespace Player */
