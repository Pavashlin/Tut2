using namespace std;
#include <iostream>
#include "Fraction.h"
#include <string>


Fraction::Fraction()
{
	w = 0;
	n = 0;
	d = 0;
};


Fraction::~Fraction()
{
	w = 0;
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

void Fraction::setw(int z)
{
	w = z;
}

int Fraction::getn()				//returns numerator 
{
	return n;
}

int Fraction::getd()				//returns denominator
{
	return d;
}
int Fraction::getw()
{
	return w;
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
		
	pancake = F.n % F.d;
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
	in.get(scan);
	
	if (scan == ' ')
	{
		int fruit, nuts;

		in >> fruit >> fslash >> nuts;
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

