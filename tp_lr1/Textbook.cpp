#include "Textbook.h"

Textbook::Textbook()
{
	_author = "no author";
	_year = 0;
	_school = "no school";
	_study_year = 0;
	_page_cnt = 0;
	_price = 0;
}

Textbook::~Textbook()
{
	_object.~Object();
	_author.~basic_string();
	_school.~basic_string();
}

void Textbook::setName(string& name)
{
	_object.name(name);
}

void Textbook::setAuthor(string& auth)
{
	_author = auth;
}

void Textbook::setYear(int& year)
{
	_year = year;
}

void Textbook::setSchool(string& sch)
{
	_school = sch;
}

void Textbook::setYearofStudy(int& styear)
{
	_study_year = styear;
}

void Textbook::setPageCount(int& pages)
{
	_page_cnt = pages;
}

void Textbook::setPrice(double& price)
{
	_price = price;
}

string Textbook::getName()
{
	return _object.getName();
}

string Textbook::getAuthor()
{
	return _author;
}

string Textbook::getSchool()
{
	return _school;
}

int Textbook::getYear()
{
	return _year;
}

int Textbook::getYearofStudy()
{
	return _study_year;
}

int Textbook::getPageCount()
{
	return _page_cnt;
}

double Textbook::getPrice()
{
	return _price;
}


//��� ���� ���������

int Textbook::GetID()
{
	return 2;
}

void Textbook::GetInfo()
{
	cout << "�������� �����: " << _object.getName() << endl;
	cout << "�����: " << _author << endl;
	cout << "��� �������: " << _year << endl;
	cout << "��� ������ �������� ��������� �������������: " << _school << endl;
	cout << "��� ��������: " << _study_year << endl;
	cout << "����� �������: " << _page_cnt << endl;
	cout << "����: " << _price << endl;
}

void Textbook::Edit()
{
	string line;
	int num;
	double dnum;

	cout << "������� ������������: ";
	cin >> line;
	_object.name(line);

	cout << "������� ������: ";
	cin >> line;
	_author = line;

	cout << "���: ";
	cin >> num;
	_year = num;

	cout << "������� ������� ���������: ";
	cin >> line;
	_school = line;

	cout << "������� ��� ��������: ";
	cin >> num;
	_study_year = num;

	cout << "������� ����� �������: ";
	cin >> num;
	_page_cnt = num;

	cout << "������� ����: ";
	cin >> dnum;
	_price = dnum;
}
