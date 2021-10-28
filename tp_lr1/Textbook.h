#pragma once
#pragma once
#include <iostream>
#include <string>
#include <locale>
#include "Base.h"
#include "Object.h"
using namespace std;

/*
ƒл€ учебника определено: название, автор, год выпуска,
дл€ какого учебного заведени€ предназначено, год обучени€, объем страниц,
стоимость.
*/


class Textbook : public Base
{
public:
	Textbook();
	~Textbook();

	void setName(string& name);
	void setAuthor(string& auth);
	void setYear(string& year);
	void setSchool(string& sch);
	void setYearofStudy(string& styear);
	void setPageCount(string& pages);
	void setPrice(string& price);

	string getName();
	string getAuthor();
	string getSchool();
	string getYear();
	string getYearofStudy();
	string getPageCount();
	string getPrice();

	virtual int GetID() override;
	virtual void GetInfo() override;
	virtual void Edit() override;

private:
	Object _object;
	string _author;
	string _year;
	string _school;
	string _study_year;
	string _page_cnt;
	string _price;

};