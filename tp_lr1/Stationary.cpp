#include "Stationary.h"

Stationary::Stationary()
{
	_type = "no type";
	_colour = "no colour";
	_purpose = "no purpose";
	_price = 0;
}

Stationary::~Stationary()
{
	_object.~Object();
	_type.~basic_string();
	_colour.~basic_string();
	_purpose.~basic_string();
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

void Stationary::setPrice(double& price)
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

double Stationary::getPrice()
{
	return _price;
}


///��� ��������


int Stationary::GetID()
{
	return 3;
}

void Stationary::GetInfo()
{
	cout << "������������ ����������: " << _object.getName() << endl;
	cout << "���: " << _type << endl;
	cout << "��������������: " << _purpose << endl;
	cout << "����: " << _colour << endl;
	cout << "����: " << _price << endl;
}

void Stationary::Edit()
{

	string line;
	double dnum;

	cout << "������� ������������: ";
	cin >> line;
	_object.name(line);

	cout << "������� ���: ";
	cin >> line;
	_type = line;

	cout << "������� ��������������: ";
	cin >> line;
	_purpose = line;

	cout << "������� ����: ";
	cin >> line;
	_colour = line;

	cout << "������� ����: ";
	cin >> dnum;
	_price = dnum;
}
