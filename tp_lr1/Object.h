#pragma once
#include <iostream>

using namespace std;

class Object
{
public:
	Object();
	explicit Object(string& objName);
	~Object();

	void name(string& objName);
	string getName();
	
private:
	string objName;
};
