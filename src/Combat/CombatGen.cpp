/*
 * CombatGen.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#include "CombatGen.h"

namespace Combat {

CombatGen::CombatGen(int en,std::string enType) {
	// TODO Auto-generated constructor stub
	EnemyNum = en;
	EnemyType = enType;
	Enemies = new Enemy[EnemyNum];

}

Enemy* CombatGen::FillFight() {
	for(int k = 0;k <= EnemyNum;k++)
	{
		if(EnemyType == "Bandit")
		{
			Enemies[k] = Combat::Bandit(100,EnemyType);
		}
	}
	return Enemies;
}

CombatGen::~CombatGen() {
	// TODO Auto-generated destructor stub
}

} /* namespace Combat */
