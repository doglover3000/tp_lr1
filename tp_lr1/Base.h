#pragma once
#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base() {};
	virtual int GetID() = 0;
	virtual void Edit() = 0;
	virtual string GetInfo() = 0;
};
