#include "Stationary.h"

Stationary::Stationary()
{
	_type = "no type";
	_colour = "no colour";
	_purpose = "no purpose";
	_price = "0";
}

Stationary::~Stationary()
{
	_object.~Object();
	_type.~basic_string();
	_colour.~basic_string();
	_purpose.~basic_string();
	_price.~basic_string();
}

void Stationary::setName(string& name)
{
	_object.name(name);
}

void Stationary::setType(string& type)
{
	_type = type;
}

void Stationary::setColour(string& color)
{
	_colour = color;
}

void Stationary::setPurpose(string& purp)
{
	_purpose = purp;
}

void Stationary::setPrice(string& price)
{
	_price = price;
}

string Stationary::getName()
{
	return _object.getName();
}

string Stationary::getType()
{
	return _type;
}

string Stationary::getColour()
{
	return _colour;
}

string Stationary::getPurpose()
{
	return _purpose;
}

string Stationary::getPrice()
{
	return _price;
}

int Stationary::GetID()
{
	return 3;
}

void Stationary::GetInfo()
{
	cout << "Stationary name: " << _object.getName() << endl;
	cout << "Stationary type: " << _type << endl;
	cout << "Purpose: " << _purpose << endl;
	cout << "Colour: " << _colour << endl;
	cout << "Price: " << _price << endl;
}

void Stationary::Edit()
{
	string line;

	cout << "Enter stationary name: ";
	getline(cin, line);
	getline(cin, line);
	_object.name(line);

	cout << "Enter stationary type: ";
	getline(cin, line);
	_type = line;

	cout << "Enter purpose: ";
	getline(cin, line);
	_purpose = line;

	cout << "Enter colour: ";
	getline(cin, line);
	_colour = line;

	cout << "Enter price: ";
	getline(cin, line);
	_price = line;
}
