
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

	Fraction operator+(Fraction &);
	Fraction operator-(Fraction &);
	Fraction operator*(Fraction &);
	Fraction operator/(Fraction &);
	
};


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
