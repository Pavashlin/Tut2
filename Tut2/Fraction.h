#pragma once
#pragma once
#ifndef FRACTION_H
#define FRACTION_H
using namespace std;

class Fraction
{
private:
	int n;		//numerator
	int d;		//denominator

public:
	Fraction();
	~Fraction();
	void setn(int);
	void setd(int);
	
	int getn();
	int getd();
	

	Fraction operator+(Fraction &);
	Fraction operator-(Fraction &);
	Fraction operator*(Fraction &);
	Fraction operator/(Fraction &);
	friend ostream &operator<<(ostream &, const Fraction &);
	friend istream &operator>>(istream &, Fraction &);
};

#endif























