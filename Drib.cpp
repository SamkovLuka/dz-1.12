#include "Drib.h"
#include <iostream>
using namespace std;


Drib::Drib(int a, int b)
{
    if (b == 0) {
        cout << "Denominator cannot be zero. Setting to 1 by default." << endl;
        this->a = 0;
        this->b = 1;
    }
    else {
        this->a = a;
        this->b = b;
    }
}

Drib Drib::operator+(const Drib& other) const
{
	int numerator = this->a * other.b + this->b * other.a;
	int denominator = this->b * other.b;
	return Drib(numerator, denominator);
}


void Drib::Show() const
{
	cout << a << "/" << b << endl;
}