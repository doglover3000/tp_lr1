#include "Book.h"

Book::Book()
{
	int year = 0;
	string release = "no release date";
	string descrip = "no book description";
	string genre = "no genre";
	int page_cnt = 0;
	double price = 0;
}

Book::~Book()
{
	_object.~Object();
	_release.~basic_string();
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

void Book::setReleaseDate(string& release)
{
	_release = release;
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

string Book::getReleaseDate()
{
	return _release;
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


// днаюбхрэ щрн

int Book::GetID()
{
	return 0;
}

string Book::GetInfo()
{
	return string();
}

void Book::Edit()
{
}


