#pragma once
#ifndef KUCING_H
#define KUCING_H

#include "Pet.h"


class Kucing : public Pet {
public:
	Kucing(string name);
	virtual void activities();
	virtual void eat();
	virtual void play();
	void really();
};

#endif // !KUCING_H