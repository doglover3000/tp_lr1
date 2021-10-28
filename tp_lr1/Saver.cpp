#include "Saver.h"

void BookSaver::Save(ofstream& out, Base& base)
{
	Book* tmp = (Book*)(&base);
	out << tmp->GetID() << endl;
	out << tmp->getName() << endl;
	out << tmp->getAuthor() << endl;
	out << tmp->getYear() << endl;
	out << tmp->getDescription() << endl;
	out << tmp->getGenre() << endl;
	out << tmp->getNumberofPages() << endl;
	out << tmp->getPrice() << endl;
}

void TextbookSaver::Save(ofstream& out, Base& base)
{
	Textbook* tmp = (Textbook*)(&base);
	out << tmp->GetID() << endl;
	out << tmp->getName() << endl;
	out << tmp->getAuthor() << endl;
	out << tmp->getYear() << endl;
	out << tmp->getSchool() << endl;
	out << tmp->getYearofStudy() << endl;
	out << tmp->getPageCount() << endl;
	out << tmp->getPrice() << endl;
}

void StationarySaver::Save(ofstream& out, Base& base)
{
	Stationary* tmp = (Stationary*)(&base);
	out << tmp->GetID() << endl;
	out << tmp->getName() << endl;
	out << tmp->getType() << endl;
	out << tmp->getPurpose() << endl;
	out << tmp->getColour() << endl;
	out << tmp->getPrice() << endl;
}

void Save(Keeper& keeper)
{
	ofstream out("data.txt");
	if (!out.is_open())
		cout << "Base is not open!";

	for (int i = 0; i < keeper.getsize(); i++)
	{
		if (keeper[i].GetID() == 1)
			(new BookSaver)->Save(out, keeper[i]);
		else if (keeper[i].GetID() == 2)
			(new TextbookSaver)->Save(out, keeper[i]);
		else if (keeper[i].GetID() == 3)
			(new StationarySaver)->Save(out, keeper[i]);
	}
	out.close();
}
