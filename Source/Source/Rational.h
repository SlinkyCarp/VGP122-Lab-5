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
	Rational(int , int ); // constructor
	void reduced();
	void addition(Rational);
	void subtraction(Rational);
	void multiplication(Rational);
	void division(Rational);
	void toString(char);
	void toDouble(double);
};


#endif 
