#pragma once
#include "Base.h"
#include "ObjectofKeeper.h"

class Keeper
{
public:
	Keeper();
	~Keeper();

	void add(Base& obj);
	void remove(int i);
	void remove_all();
	int getsize();

private:
	int _size;
	ObjectofKeeper* _first;
};