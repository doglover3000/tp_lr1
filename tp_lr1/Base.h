#pragma once
#include <iostream>
#include <locale>
using namespace std;

class Base
{
public:
	virtual ~Base() {};
	virtual int GetID() = 0;
	virtual void Edit() = 0;
	virtual void GetInfo() = 0;
};
