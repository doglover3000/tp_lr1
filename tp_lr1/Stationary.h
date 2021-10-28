#pragma once
#include <iostream>
#include <string>
#include "Base.h"
#include "Object.h"
using namespace std;

/*
ƒл€ канцел€рии определено: тип канцел€рии, цвет, назначение,
стоимость.
*/


class Stationary : public Base
{
public:
	Stationary();
	~Stationary();

	void setName(string& name);
	void setType(string& type);
	void setColour(string& color);
	void setPurpose(string& purp);
	void setPrice(string& price);

	string getName();
	string getType();
	string getColour();
	string getPurpose();
	string getPrice();

	virtual int GetID() override;
	virtual void GetInfo() override;
	virtual void Edit() override;

private:
	Object _object;
	string _type;
	string _colour;
	string _purpose;
	string _price;

};