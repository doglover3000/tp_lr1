#include <iostream>
#include <locale>
#include "Book.h"

int main()
{
	setlocale(LC_ALL,"Rus");

	Book a;
	a.Edit();
	a.GetInfo();

	return 0;
}