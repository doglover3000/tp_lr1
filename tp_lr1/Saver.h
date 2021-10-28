#include <iostream>
#include <string>
#include <fstream>
#include "Book.h"
#include "Stationary.h"
#include "Textbook.h"
#include "Keeper.h"

void Save(Keeper& keeper);

class Saver
{
public:
	virtual ~Saver() {};
	virtual void Save(ofstream& out, Base& base) = 0;
};

class BookSaver: public Saver
{
public:
	~BookSaver() {};
	virtual void Save(ofstream& out, Base& base) override;
};

class TextbookSaver : public Saver
{
public:
	~TextbookSaver() {};
	virtual void Save(ofstream& out, Base& base) override;
};

class StationarySaver : public Saver
{
public:
	~StationarySaver() {};
	virtual void Save(ofstream& out, Base& base) override;
};
