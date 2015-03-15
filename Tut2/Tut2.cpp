// Tut2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include<string>
#include "Fraction.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
	int i=0;
	Fraction toast, eggs, breakfast;
	
	do{
		if (i > 0)
		{
			cout <<"Invalid denominator entered, please enter again"<<endl;
			cout << "Enter first fraction" << endl;
			cin >> toast;
			
		}
		else
		{
			cout << "Enter first fraction" << endl;
			cin >> toast;
			i++;
		}
	
	} while (toast.getd() == 0);

	i = 0;
	
	do{
		if (i > 0)
		{
			cout << "Invalid denominator entered, please enter again" << endl;
			cout << "Enter second fraction" << endl;
			cin >> eggs;
		}
		
		else
		{
			cout << "Enter second fraction" << endl;
			cin >> eggs;
			i++;
		}
	}while(eggs.getd() == 0);
	

	breakfast = toast + eggs;
	cout <<endl << "Addition: " << breakfast<< "\n";

	breakfast = toast - eggs;
	cout << "Subtraction: " << breakfast << "\n";

	breakfast = toast * eggs;
	cout << "Multiplication: " << breakfast << "\n";

	breakfast = toast / eggs;
	cout << "Division: " << breakfast<< "\n";

	cout << endl;

	return 0;
}











