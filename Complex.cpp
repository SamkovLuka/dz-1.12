#include "Complex.h"
#include <iostream>
using namespace std;




Complex::Complex(double real, double imag) : real(real), imag(imag) {}





Complex Complex::operator+(const Complex& other) const {
    return Complex(this->real + other.real, this->imag + other.imag);
}




Complex Complex::operator-(const Complex& other) const {
    return Complex(this->real - other.real, this->imag - other.imag);
}





Complex Complex::operator*(const Complex& other) const {
    double realPart = this->real * other.real - this->imag * other.imag;
    double imagPart = this->real * other.imag + this->imag * other.real;
    return Complex(realPart, imagPart);
}




Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    if (denominator == 0) {
        throw runtime_error("Division by zero!");
    }
    double realPart = (this->real * other.real + this->imag * other.imag) / denominator;
    double imagPart = (this->imag * other.real - this->real * other.imag) / denominator;
    return Complex(realPart, imagPart);
}




ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0) {
        out << " + " << c.imag << "i";
    }
    else {
        out << " - " << -c.imag << "i";
    }
    return out;
}


istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}