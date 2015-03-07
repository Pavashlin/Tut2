// Tut2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include<string>
#include "Fraction.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
	Fraction toast, eggs, breakfast;
	int var1=0, var2=0, var3=0;
	void read(int *a, int *b, int *c);

	read(&var1,&var2,&var3);

	toast.setw(var1);
	toast.setn(var2);
	toast.setd(var3);

	
		
	return 0;
}

void read(int *a, int *b, int *c)
{
	char div;

	cout << "Enter mixed number:";
	cin >> *a;
	cin >> *b;
	cin >> div;				//store division symbol in order to separate numbers
	cin >> *c;

	

}










