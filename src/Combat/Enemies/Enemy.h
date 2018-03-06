/*
 * Enemy.h
 *
 *  Created on: Mar 5, 2018
 *      Author: Joel
 */

#ifndef COMBAT_ENEMIES_ENEMY_H_
#define COMBAT_ENEMIES_ENEMY_H_
#include <iostream>

namespace Combat {

class Enemy {
private:
	std::string Race;
	double Health;
	int Stats[5];
	double UnarmedAtck;

	double UnarmedCalc();

public:
	Enemy(double, int[],std::string);
	void retStats();
	double retHealth();
	int retStat(int);
	virtual ~Enemy();
};

} /* namespace Enemy */

#endif /* COMBAT_ENEMIES_ENEMY_H_ */
