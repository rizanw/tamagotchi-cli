#pragma once
#ifndef ANJING_H
#define ANJING_H

#include "Pet.h"


class Anjing : public Pet{
public:
	Anjing(string name);
	virtual void activities();
	virtual void eat();
	virtual void play();
	void really();
};

#endif // !ANJING_H