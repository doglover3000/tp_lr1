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

	virtual int GetID() override;
	virtual string GetInfo() override;
	virtual void Edit() override;

private:
	Object object;
	string name;
	string author;
	int year;
	string school;
	int study_year;
	int page_cnt;
	double price;

};