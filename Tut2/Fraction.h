#pragma once
#pragma once
#ifndef FRACTION_H
#define FRACTION_H
using namespace std;

class Fraction
{
private:
	int w;		//whole number
	int n;		//numerator
	int d;		//denominator

public:
	Fraction();
	~Fraction();
	void setn(int);
	void setd(int);
	void setw(int);
	int getn();
	int getd();
	int getw();

	Fraction operator+(Fraction &);
	Fraction operator-(Fraction &);
	Fraction operator*(Fraction &);
	Fraction operator/(Fraction &);
	friend ostream &operator<<(ostream &, const Fraction &);
	friend istream &operator>>(istream &, Fraction &);
};

#endif























