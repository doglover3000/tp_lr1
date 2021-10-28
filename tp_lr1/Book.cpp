#include "Book.h"

Book::Book()
{
	_year = "0";
	_author = "no author date";
	_descrip = "no book description";
	_genre = "no genre";
	_page_cnt = "0";
	_price = "0";
}

Book::~Book()
{
	_object.~Object();
	_author.~basic_string();
	_descrip.~basic_string();
	_genre.~basic_string();
	_page_cnt.~basic_string();
	_price.~basic_string();
}

void Book::setName(string& name)
{
	_object.name(name);
}

void Book::setYear(string& year)
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

void Book::setPageCount(string& pages)
{
	_page_cnt = pages;
}

void Book::setPrice(string& price)
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

string Book::getYear()
{
	return _year;
}

string Book::getNumberofPages()
{
	return _page_cnt;
}

string Book::getPrice()
{
	return _price;
}


int Book::GetID()
{
	return 1;
}

void Book::GetInfo()
{
	cout << "Book title: " << _object.getName() << endl;
	cout << "Author: " << _author << endl;
	cout << "Release year: " << _year << endl;
	cout << "Description: " << _descrip << endl;
	cout << "Genre: " << _genre << endl;
	cout << "Number of pages: " << _page_cnt << endl;
	cout << "Price: " << _price << endl;

}

void Book::Edit()
{
	string line;

	cout << "Enter book title: ";
	getline(cin, line);
	getline(cin, line);
	_object.name(line);

	cout << "Enter author: ";
	getline(cin, line);
	_author = line;

	cout << "Enter year: ";
	getline(cin, line);
	_year = line;

	cout << "Enter discription: ";
	getline(cin, line);
	_descrip = line;

	cout << "Enter genre: ";
	getline(cin, line);
	_genre = line;

	cout << "Enter number of pages: ";
	getline(cin, line);
	_page_cnt = line;

	cout << "Enter price: ";
	getline(cin, line);
	_price = line;
}


