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


//щрн рнфе днаюбхрээ

int Textbook::GetID()
{
	return 0;
}

string Textbook::GetInfo()
{
	return string();
}

void Textbook::Edit()
{
}
