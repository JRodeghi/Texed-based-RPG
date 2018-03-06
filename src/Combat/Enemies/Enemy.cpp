/*
 * Enemy.cpp
 *
 *  Created on: Mar 5, 2018
 *      Author: Joel
 */

#include "Enemy.h"

namespace Enemy {

Enemy::Enemy(double h,int s[],std::string r) {
	// TODO Auto-generated constructor stub
	Health = h;
	for(int k = 0;k <= 5;k++)
	{
		Stats[k] = s[k];
	}

	Race = r;

	UnarmedAtck = UnarmedCalc();
}

void Enemy::retStats() {

	std::cout<<"health: " << Health << std::endl;
	std::cout<<"Strength: " << Stats[0] << std::endl;
	std::cout<<"Dexterity: " << Stats[1] << std::endl;
	std::cout<<"Intelligence: " << Stats[2] << std::endl;
	std::cout<<"Wisdom: " << Stats[3] << std::endl;
	std::cout<<"Charisma: " << Stats[4] << std::endl;
	std::cout<<"Unarmed attack: " << UnarmedAtck << std::endl;

}

double Enemy::UnarmedCalc() {
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

double Enemy::retHealth() {
	return Health;
}

int Enemy::retStat(int s) {
	return Stats[s];
}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

} /* namespace Enemy */
