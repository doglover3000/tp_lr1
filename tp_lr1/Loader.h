#pragma once
#include <fstream>
#include <string>
#include <conio.h>
#include "Keeper.h"
#include "Book.h"
#include "Textbook.h"
#include "Stationary.h"

void Load(Keeper& keeper);

class Loader
{
public:
	virtual ~Loader() {};
	virtual void Load(ifstream& in, Keeper& keeper) = 0;
};

class BookLoader: public Loader
{
public:
	~BookLoader() {};
	virtual void Load(ifstream& in, Keeper& keeper) override;
};

class TextbookLoader : public Loader
{
public:
	~TextbookLoader() {};
	virtual void Load(ifstream& in, Keeper& keeper) override;
};

class StationaryLoader : public Loader
{
public:
	~StationaryLoader() {};
	virtual void Load(ifstream& in, Keeper& keeper) override;
};