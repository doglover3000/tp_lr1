#pragma once
#include <iostream>
#include <locale>
#include "Base.h"
#include "Object.h"
using namespace std;

/*
Для книг определено: название, автор, год выпуска, аннотация, жанр, объем
страниц, стоимость.
*/


class Book: public Base
{
public:
	Book();
	~Book();

	void setName(string& name);
	void setAuthor(string& auth);
	void setYear(int& year);
	void setDescription(string& desc);
	void setGenre(string& genre);
	void setPageCount(int& pages);
	void setPrice(double& price);

	string getName();
	string getAuthor();
	string getDescription();
	string getGenre();
	int getYear();
	int getNumberofPages();
	double getPrice();

	virtual int GetID() override;
	virtual void GetInfo() override;
	virtual void Edit() override;

private:
	Object _object;
	int _year;
	string _author;
	string _descrip;
	string _genre;
	int _page_cnt;
	double _price;

};