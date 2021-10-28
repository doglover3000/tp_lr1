#include "Loader.h"

void Load(Keeper& keeper)
{
	ifstream in("data.txt");
	if (!in.is_open())
	{
		cout << "Can't open base! Empty base created.";
		_getch();
		return;
	}

	string line;
	while (getline(in, line))
	{
		if (line == "1")
			(new BookLoader)->Load(in, keeper);
		else if (line == "2")
			(new TextbookLoader)->Load(in, keeper);
		else if (line == "3")
			(new StationaryLoader)->Load(in, keeper);
	}
	cout << "Base successfully loaded!";
	_getch();		
}

void BookLoader::Load(ifstream& in, Keeper& keeper)
{
	string line;
	Book* tmp = new Book;
	getline(in, line);
	tmp->setName(line);
	getline(in, line);
	tmp->setAuthor(line);
	getline(in, line);
	tmp->setYear(line);
	getline(in, line);
	tmp->setDescription(line);
	getline(in, line);
	tmp->setGenre(line);
	getline(in, line);
	tmp->setPageCount(line);
	getline(in, line);
	tmp->setPrice(line);
	keeper.add(*tmp);
}

void TextbookLoader::Load(ifstream& in, Keeper& keeper)
{
	string line;
	Textbook* tmp = new Textbook;
	getline(in, line);
	tmp->setName(line);
	getline(in, line);
	tmp->setAuthor(line);
	getline(in, line);
	tmp->setYear(line);
	getline(in, line);
	tmp->setSchool(line);
	getline(in, line);
	tmp->setYearofStudy(line);
	getline(in, line);
	tmp->setPageCount(line);
	getline(in, line);
	tmp->setPrice(line);
	keeper.add(*tmp);
}

void StationaryLoader::Load(ifstream& in, Keeper& keeper)
{
	string line;
	Stationary* tmp = new Stationary;
	getline(in, line);
	tmp->setName(line);
	getline(in, line);
	tmp->setType(line);
	getline(in, line);
	tmp->setPurpose(line);
	getline(in, line);
	tmp->setColour(line);
	getline(in, line);
	tmp->setPrice(line);
	keeper.add(*tmp);
}
