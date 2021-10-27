#pragma once
#include <iostream>
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
	void setPrice(double& price);

	virtual int GetID() override;
	virtual string GetInfo() override;
	virtual void Edit() override;

private:
	Object object;
	string type;
	string colour;
	string purpose;
	double price;

};