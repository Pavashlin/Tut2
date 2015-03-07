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
	int var1=0, var2=0, var3=0, var4=0, var5=0, var6=0;
	void read(int *a, int *b, int *c, int *d, int *e, int *f);

	read(&var1,&var2,&var3,&var4,&var5,&var6);

	toast.setw(var1);
	toast.setn(var2);
	toast.setd(var3);
	eggs.setw(var4);
	eggs.setn(var5);
	eggs.setd(var6);
	

	
		
	return 0;
}

void read(int *a, int *b, int *c, int *d, int *e, int *f)
{
	char div1, div2;

	cout << "Enter first mixed number:";
	cin >> *a;
	cin >> *b;
	cin >> div1;				//store division symbol in order to separate numbers
	cin >> *c;

	cout << "Enter second mixed number: ";
	cin >> *d;
	cin >> *e;
	cin >> div2;
	cin >> *f;
}










