#include <iostream>
#include <locale>
#include <Windows.h>
#include <conio.h>
#include "Book.h"
#include "Stationary.h"
#include "Textbook.h"
#include "Keeper.h"
#include "main.h"

void Print(Keeper& keeper);
void AddObject(Keeper& keeper);
void RemoveObject(Keeper& keeper);
void EditObject(Keeper& keeper);
void RemoveAllObjects(Keeper& keeper);
Base& Create(int objtype);


int main()
{
	setlocale(LC_ALL,"Rus");

	int menu, entered = 0;
	Keeper keeper;

	while (true)
	{
		system("cls");
		cout << "Enter number of command:\n"
			"1 - Print\n"
			"2 - Add object\n"
			"3 - Remove object\n"
			"4 - Edit object\n"
			"5 - Remove all objects\n"
			"0 - Save and exit\n> ";
		cin >> menu;
		switch (menu)
		{
		default:
			break;
		case 0:
			return 0;
		case 1:
			Print(keeper);
			break;
		case 2:
			AddObject(keeper);
			break;
		case 3:
			RemoveObject(keeper);
			break;
		case 4:
			EditObject(keeper);
			break;
		case 5:
			RemoveAllObjects(keeper);
			break;
		}
	}
}

void Print(Keeper& keeper)
{
	system("cls");

	if (keeper.getsize() == 0)
	{
		cout << "Base is empty!";
		_getch();
		return;
	}
	
	for (int i = 0; i < keeper.getsize(); i++)
	{
		cout << "[" << i << "] ";
		
		if (keeper[i].GetID() == 1)
			cout << "BOOK" << endl;
		if (keeper[i].GetID() == 2)
			cout << "TEXTBOOK" << endl;
		if (keeper[i].GetID() == 3)
			cout << "STATIONARY" << endl;
		keeper[i].GetInfo();
		cout << endl;
	}
	_getch();
}

void AddObject(Keeper& keeper)
{
	int entered;
	system("cls");
	cout << "1. Add new book\n2. Add new textbook\n3. Add new stationary\n>> ";
	cin >> entered;
	Base* tmp = &Create(entered);

	system("cls");

	if (entered != 1 && entered != 2 && entered != 3)
	{
		cout << "Wrong number!" << endl;
		delete tmp;
		return;
	}
	cin.clear();
	tmp->Edit();
	keeper.add(*tmp);
	tmp = nullptr;
	delete tmp;
	cout << "Object added!";
	_getch();
}

void RemoveObject(Keeper& keeper)
{
	int entered;
	system("cls");
	if (keeper.getsize() == 0)
	{
		cout << "Base is empty!";
		_getch();
		return;
	}
	cout << "Enter index of object to delete: ";
	cin >> entered;
	keeper.remove(entered);
	cout << "Object removed!";
	_getch();
}

void EditObject(Keeper& keeper)
{
	system("cls");
	if (keeper.getsize() == 0)
	{
		cout << "Base is empty!";
		_getch();
		return;
	}
	int entered;
	cout << "Enter index of object: ";
	cin >> entered;
	keeper[entered].Edit();
	cout << "Done!";
	_getch();
}

void RemoveAllObjects(Keeper& keeper)
{
	system("cls");
	if (keeper.getsize() == 0)
	{
		cout << "Base is empty!";
		_getch();
		return;
	}
	keeper.remove_all();
	cout << "Base is now empty!";
	_getch();
}

Base& Create(int objtype)
{
	if (objtype == 1)
		return *(new Book);
	else if (objtype == 2)
		return *(new Textbook);
	else if (objtype == 3)
		return *(new Stationary);
}	