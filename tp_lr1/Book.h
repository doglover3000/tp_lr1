#pragma once
#include <iostream>
#include "Base.h"
#include "Object.h"
using namespace std;

/*
��� ���� ����������: ��������, �����, ��� �������, ���������, ����, �����
�������, ���������.
*/


class Book: public Base
{
public:
	Book();
	~Book();

	void setName(string& name);
	void setYear(int& year);
	void setReleaseDate(string& release);
	void setDescription(string& desc);
	void setGenre(string& genre);
	void setPageCount(int& pages);
	void setPrice(double& price);

	virtual int GetID() override;
	virtual string GetInfo() override;
	virtual void Edit() override;

private:
	Object object;
	string name;
	int year;
	string release;
	string descrip;
	string genre;
	int page_cnt;
	double price;

};