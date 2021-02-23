#include "Rational.h"
#include "Definitions.h"

Rational::Rational(int num, int deno)
{
	numerator = num;
	denominator = deno;
}

void Rational::reduced()
{
	int gcd = 0;
	int largest;
	largest = numerator > denominator ? numerator : denominator;

	int gcd = 0;

	for (int i = 2; i <=largest; i++)
		if (numerator % i == 0 && denominator % i == 0)
		{
			gcd = i;
		}
	if (gcd != 0)
	{
		numerator = numerator / gcd;
		denominator = denominator / gcd;
	}
	
	
}

void Rational::addition(Rational r)
{
	numerator = numerator + r.numerator;
	denominator = denominator + r.denominator;
	reduced();
}

void Rational::subtraction(Rational r)
{
	numerator = numerator - r.numerator;
	denominator = denominator - r.denominator;
	reduced();
}

void Rational::multiplication(Rational r)
{
	numerator = numerator * r.numerator;
	denominator = denominator * r.denominator;
	reduced();
}

void Rational::division(Rational r)
{
	numerator = numerator / r.numerator;
	denominator = denominator / r.denominator;
	reduced();
}

void Rational::toString(char)
{
}

void Rational::toDouble(double)
{
	double output;
	output = static_cast<double>(numerator) / static_cast<double>(denominator);
	std::cout << output << std::endl;
}
