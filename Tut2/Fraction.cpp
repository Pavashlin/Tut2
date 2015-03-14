using namespace std;
#include <iostream>
#include "Fraction.h"
#include <string>


Fraction::Fraction()
{
	
	n = 0;
	d = 0;
};


Fraction::~Fraction()
{

	n = 0;
	d = 0;
};

void Fraction::setn(int x)			//sets numerator
{
	n = x;
}

void Fraction::setd(int y)			//sets denominator
{
	d = y;
}

int Fraction::getn()				//returns numerator 
{
	return n;
}

int Fraction::getd()				//returns denominator
{
	return d;
}





Fraction Fraction::operator+(Fraction &milk)
{
	Fraction cookies;

	cookies.n = n*milk.d + milk.n*d;
	cookies.d = d*milk.d;
	return cookies;

}

Fraction Fraction:: operator-(Fraction &milk)
{
	Fraction cookies;

	cookies.n = n*milk.d - milk.n*d;
	cookies.d = d*milk.d;
	return cookies;
}

Fraction Fraction:: operator*(Fraction &milk)
{
	Fraction cookies;

	cookies.n = n*milk.n;
	cookies.d = d*milk.d;
	return cookies;
}

Fraction Fraction:: operator/(Fraction &milk)
{
	Fraction cookies;

	cookies.n = n*milk.d;
	cookies.d = d*milk.n;
	return cookies;

}

ostream& operator<<(ostream& out, const Fraction& F)
{
	int pancake, waffle;
		
	pancake = F.n % F.d;										//provides remainder for easy printing
	waffle = F.n / F.d;

	if (waffle == 0)
	{
		out << F.n << "/" << F.d;
	}
	else
	{
		out << waffle << pancake << "/" << F.d;
	}
	return out;
}

istream& operator>>(istream& in, Fraction& F)
{
	int tupperware;
	char scan=0,fslash;

	in >> tupperware;
	in.get(scan);										//stores next character in the stream to scan variable
	
	if (scan == ' ')
	{
		int fruit, nuts;

		in >> fruit >> fslash >> nuts;					//use of dummy variable to store forward slash
		F.n = (tupperware*nuts) + fruit;		
		F.d = nuts;
	}

	else if (scan == '/')
	{
		F.n = tupperware;
		in >> F.d;
	}

	else
	{
		F.n = tupperware;
		F.d = 1;
	}
	return in;
}

