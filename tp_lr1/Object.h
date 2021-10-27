#pragma once
#include <iostream>

using namespace std;

class Object
{
public:
	explicit Object(string& objName);
	~Object();

	void name(string& objName);
	string getName();
	
private:
	string objName;
};
