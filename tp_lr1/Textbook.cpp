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


//ЭТО ТОЖЕ ДОБАВИТЬЬ

int Textbook::GetID()
{
	return 2;
}

void Textbook::GetInfo()
{
	cout << "Название книги: " << _object.getName() << endl;
	cout << "Автор: " << _author << endl;
	cout << "Год выпуска: " << _year << endl;
	cout << "Для какого учебного заведения предназначено: " << _school << endl;
	cout << "Год обучения: " << _study_year << endl;
	cout << "Объем страниц: " << _page_cnt << endl;
	cout << "Цена: " << _price << endl;
}

void Textbook::Edit()
{
	string line;
	int num;
	double dnum;

	cout << "Введите наименование: ";
	cin >> line;
	_object.name(line);

	cout << "Введите автора: ";
	cin >> line;
	_author = line;

	cout << "Год: ";
	cin >> num;
	_year = num;

	cout << "Введите учебное заведение: ";
	cin >> line;
	_school = line;

	cout << "Введите год обучения: ";
	cin >> num;
	_study_year = num;

	cout << "Введите объем страниц: ";
	cin >> num;
	_page_cnt = num;

	cout << "Введите цену: ";
	cin >> dnum;
	_price = dnum;
}
