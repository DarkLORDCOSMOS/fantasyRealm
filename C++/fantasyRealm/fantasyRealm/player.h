#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "ability.h"
#include "weapon.h"
#include <codecvt>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class player {
public:
	wstring name;
	wstring race;
	wstring role;
	weapon _weapon;
	vector<ability> skills;
	bool selected = false;
	bool current = false;
	int level;
	int wits;
	int brave;
	int x;
	int y;
	enum statistics { strength, defense, stamina, perception, accuracy, agility, intellect, wisdom, spirit, charisma, luck };
	struct stat { wstring name;	int value; };
	stat stats[luck + 1] = { {L"Strength", 1}, {L"Defense", 1}, {L"Stamina", 1}, {L"Perception", 1}, {L"Accuracy", 1}, {L"Agility", 1}, {L"Intellect", 1}, {L"Wisdom", 1}, {L"Spirit", 1}, {L"Charisma", 1}, {L"Luck", 1}, };
	player::stat getStats(wstring role, player::stat stats[]);
	player::stat randomStats(stat stats[], vector<int> bonuses, int points);
	enum dialogue { greeting, introduction, exclamation, join, joined, disgust };
	dialogue thoughts = greeting;
	wstring speak(dialogue thoughts);

	player();
	player(wstring name);
	static wstring input();
};

class hero : public player {
public:
	hero();
}; 

class player1 : public player {
public:
	player1();
};

class npc : public player {
public:
	npc(int x, int y);
};

class inn : public player {
public:
	inn(int x, int y);
};

class shop : public player {
public:
	shop(int x, int y);
};

class smith : public player {
public:
	smith(int x, int y);
};

#endif