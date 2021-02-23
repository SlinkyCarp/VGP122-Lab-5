#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H
#include "Definitions.h"

class Rational
{
private:
	int numerator;
	int denominator;
public:
	Rational(int, int); // constructor
	void reduced(int a, int b);
	void addition(int aNum, int aDeno, int bNum, int bDeno);
	void subtraction(int aNum, int aDeno, int bNum, int bDeno);
	void multiplication(int aNum, int aDeno, int bNum, int bDeno);
	void division(int aNum, int aDeno, int bNum, int bDeno);
	void toString(int aNum, int aDeno);
	void toDouble(int aNum, int aDeno);
};


#endif 
