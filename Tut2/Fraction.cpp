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

};


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


}
