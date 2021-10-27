#pragma once
#pragma once
#include <iostream>
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
	void setYear(int& year);
	void setSchool(string& sch);
	void setYearofStudy(int& styear);
	void setPageCount(int& pages);
	void setPrice(double& price);

	string getName();
	string getAuthor();
	string getSchool();
	int getYear();
	int getYearofStudy();
	int getPageCount();
	double getPrice();

	virtual int GetID() override;
	virtual string GetInfo() override;
	virtual void Edit() override;

private:
	Object _object;
	string _author;
	int _year;
	string _school;
	int _study_year;
	int _page_cnt;
	double _price;

};