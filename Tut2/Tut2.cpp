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
	void read(int *a, int *b, int *c, int *d, int *e, int *f);			//function to read mixed numbers 

	int N1, N2;
	
	read(&var1,&var2,&var3,&var4,&var5,&var6);

	N1 = (var1*var3) + var2;			//simplyfying numerators
	N2 = (var4*var6) + var5;

	toast.setn(N1);
	toast.setd(var3);
	eggs.setn(N2);
	eggs.setd(var6);
	
	breakfast = toast + eggs;
	cout <<endl << "Addition:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	breakfast = toast - eggs;
	cout << "Subtraction:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	breakfast = toast * eggs;
	cout << "Multiplication:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	breakfast = toast / eggs;
	cout << "Division:" << breakfast.getn() << "/" << breakfast.getd() << endl;

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










