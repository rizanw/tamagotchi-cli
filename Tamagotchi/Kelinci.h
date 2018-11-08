#pragma once
#ifndef KELINCI_H
#define KELINCI_H

#include "Pet.h"


class Kelinci : public Pet{
public:
	Kelinci(string name);

	virtual void activities();
	virtual void eat();
	virtual void play();
	void really();
};

#endif // !KELINCI_H