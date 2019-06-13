#pragma once
#ifndef __BATTLE_H__
#define __BATTLE_H__

#include "monster.h"
#include "player.h"
#include <string>

using namespace std;

class battle {
public:
	vector<player> heroes;
	vector<monster> enemies;
	enum turn {hero, enemy};
	turn current;
	battle();
	battle(vector<player> party);
	battle(vector<player> party, monster monster);

	static vector<player> selectHero(vector<player> heroes);
	static vector<monster> selectMonster(vector<monster> monsters);

};

// actions - enter, exit, look, menu, quit, 

#endif