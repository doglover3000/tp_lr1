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

	Base& operator[](const int i);

private:
	int _size;
	ObjectofKeeper* _first;
};