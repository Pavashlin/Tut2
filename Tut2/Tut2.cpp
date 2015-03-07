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
	int var1, var2, var3, var4;

	cout << "Enter first numerator:";
	cin >> var1;

	cout << "Enter first denominator:";
	cin >> var2;

	cout << "Enter second numerator:";
	cin >> var3;

	cout << "Enter second denominator:";
	cin >> var4;

	toast.setn(var1);
	toast.setd(var2);
	eggs.setn(var3);
	eggs.setd(var4);

	breakfast = toast + eggs;
	cout << "Addition:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	breakfast = toast - eggs;
	cout << "Subtraction:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	breakfast = toast * eggs;
	cout << "Multiplication:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	breakfast = toast / eggs;
	cout << "Division:" << breakfast.getn() << "/" << breakfast.getd() << "\n";

	return 0;
}

