#include "Book.h"

Book::Book()
{
	_year = 0;
	_author = "no author date";
	_descrip = "no book description";
	_genre = "no genre";
	_page_cnt = 0;
	_price = 0;
}

Book::~Book()
{
	_object.~Object();
	_author.~basic_string();
	_descrip.~basic_string();
	_genre.~basic_string();
}

void Book::setName(string& name)
{
	_object.name(name);
}

void Book::setYear(int& year)
{
	_year = year;
}

void Book::setAuthor(string& auth)
{
	_author = auth;
}

void Book::setDescription(string& desc)
{
	_descrip = desc;
}

void Book::setGenre(string& genre)
{
	_genre = genre;
}

void Book::setPageCount(int& pages)
{
	_page_cnt = pages;
}

void Book::setPrice(double& price)
{
	_price = price;
}

string Book::getName()
{
	return _object.getName();
}

string Book::getAuthor()
{
	return _author;
}

string Book::getDescription()
{
	return _descrip;
}

string Book::getGenre()
{
	return _genre;
}

int Book::getYear()
{
	return _year;
}

int Book::getNumberofPages()
{
	return _page_cnt;
}

double Book::getPrice()
{
	return _price;
}


// �������� ���

int Book::GetID()
{
	return 1;
}

void Book::GetInfo()
{
	cout << "�������� �����: " << _object.getName() << endl;
	cout << "�����: " << _author << endl;
	cout << "��� �������: " << _year << endl;
	cout << "���������: " << _descrip << endl;
	cout << "����: " << _genre << endl;
	cout << "����� �������: " << _page_cnt << endl;
	cout << "����: " << _price << endl;
}

void Book::Edit()
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

	cout << "������� ���������: ";
	cin >> line;
	_descrip = line;

	cout << "������� ����: ";
	cin >> line;
	_genre = line;

	cout << "������� ����� �������: ";
	cin >> num;
	_page_cnt = num;

	cout << "������� ����: ";
	cin >> dnum;
	_price = dnum;
}


