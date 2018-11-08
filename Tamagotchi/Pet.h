#pragma once
#ifndef PET_H
#define PET_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>

using namespace std;

class Pet{
public:
	Pet(string name);

	void setName(string name);
	string getName();

	virtual void activities() = 0;
	virtual void eat() = 0;
	virtual void play() = 0;

	void setStatHungry(int hungry);
	int getStatHungry();
	void modStatHungry(int mod);
	string printStatHungry();

	void setStatHappy(int happy);
	int getStatHappy();
	void modStatHappy(int mod);
	string printStatHappy();

	string printStat();

private:
	string name;
	int hungryStatus;
	int happyStatus;
	string statHungry;
	string statHappy;
	string status;
};

#endif // !PET_H

