#pragma once
#include <iostream>
using namespace std;

class Drib
{
	int a, b;
	
public:
	Drib(int a = 0, int b = 1);
	Drib operator+(const Drib& other)const;
	void Show() const;
};