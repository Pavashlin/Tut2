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

	cout << "Enter mixed number:";
	cin >> var1;
	cin >> var2;
	cin >> var3;

	toast.setw(var1);
	toast.setn(var2);
	toast.setd(var3);
	

	cout << toast.getn;
		return 0;
}

