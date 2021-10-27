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


// ДОБАВИТЬ ЭТО

int Book::GetID()
{
	return 1;
}

void Book::GetInfo()
{
	cout << "Название книги: " << _object.getName() << endl;
	cout << "Автор: " << _author << endl;
	cout << "Год выпуска: " << _year << endl;
	cout << "Аннотация: " << _descrip << endl;
	cout << "Жанр: " << _genre << endl;
	cout << "Объем страниц: " << _page_cnt << endl;
	cout << "Цена: " << _price << endl;
}

void Book::Edit()
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

	cout << "Введите аннотацию: ";
	cin >> line;
	_descrip = line;

	cout << "Введите жанр: ";
	cin >> line;
	_genre = line;

	cout << "Введите объем страниц: ";
	cin >> num;
	_page_cnt = num;

	cout << "Введите цену: ";
	cin >> dnum;
	_price = dnum;
}


