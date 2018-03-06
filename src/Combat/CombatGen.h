/*
 * CombatGen.h
 *
 *  Created on: Mar 6, 2018
 *      Author: joel
 */

#ifndef COMBAT_COMBATGEN_H_
#define COMBAT_COMBATGEN_H_

#include <iostream>
#include "Enemies/Enemy.h"
#include "Enemies/Bandit.h"

namespace Combat {


class CombatGen {
private:
	int EnemyNum;
	Enemy* Enemies;
	std::string EnemyType;

	Enemy* FillFight();

public:
	CombatGen(int,std::string);
	virtual ~CombatGen();
};

} /* namespace Combat */

#endif /* COMBAT_COMBATGEN_H_ */
