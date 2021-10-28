#include <iostream>
#include <locale>
#include "Book.h"
#include "Stationary.h"
#include "Textbook.h"

int main()
{
	setlocale(LC_ALL,"Rus");

	Textbook a;
	a.Edit();
	a.GetInfo();

	return 0;
}