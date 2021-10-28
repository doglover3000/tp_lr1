#include "Textbook.h"

Textbook::Textbook()
{
	_author = "no author";
	_year = "0";
	_school = "no school";
	_study_year = "0";
	_page_cnt = "0";
	_price = "0";
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

void Textbook::setYear(string& year)
{
	_year = year;
}

void Textbook::setSchool(string& sch)
{
	_school = sch;
}

void Textbook::setYearofStudy(string& styear)
{
	_study_year = styear;
}

void Textbook::setPageCount(string& pages)
{
	_page_cnt = pages;
}

void Textbook::setPrice(string& price)
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

string Textbook::getYear()
{
	return _year;
}

string Textbook::getYearofStudy()
{
	return _study_year;
}

string Textbook::getPageCount()
{
	return _page_cnt;
}

string Textbook::getPrice()
{
	return _price;
}

int Textbook::GetID()
{
	return 2;
}

void Textbook::GetInfo()
{
	cout << "Texbook title: " << _object.getName() << endl;
	cout << "Author: " << _author << endl;
	cout << "Release year: " << _year << endl;
	cout << "Type of educational institution: " << _school << endl;
	cout << "Year of studing: " << _study_year << endl;
	cout << "Number of pages: " << _page_cnt << endl;
	cout << "Price: " << _price << endl;
}

void Textbook::Edit()
{
	string line;

	cout << "Enter texbook title: ";
	getline(cin, line);
	getline(cin, line);
	_object.name(line);

	cout << "Enter author: ";
	getline(cin, line);
	_author = line;

	cout << "Enter release year: ";
	getline(cin, line);
	_year = line;

	cout << "Enter type of educational institution: ";
	getline(cin, line);
	_school = line;

	cout << "Enter year of studing: ";
	getline(cin, line);
	_study_year = line;

	cout << "Enter number of pages: ";
	getline(cin, line);
	_page_cnt = line;

	cout << "Enter price: ";
	getline(cin, line);
	_price = line;
}
