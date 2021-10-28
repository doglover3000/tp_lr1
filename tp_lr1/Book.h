#pragma once
#include <iostream>
#include <locale>
#include <string>
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
	void setYear(string& year);
	void setDescription(string& desc);
	void setGenre(string& genre);
	void setPageCount(string& pages);
	void setPrice(string& price);

	string getName();
	string getAuthor();
	string getDescription();
	string getGenre();
	string getYear();
	string getNumberofPages();
	string getPrice();

	virtual int GetID() override;
	virtual void GetInfo() override;
	virtual void Edit() override;

private:
	Object _object;
	string _year;
	string _author;
	string _descrip;
	string _genre;
	string _page_cnt;
	string _price;

};