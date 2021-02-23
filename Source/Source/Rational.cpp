#include "Rational.h"
#include "Definitions.h"

Rational::Rational(int num, int deno)
{
	
	for (int i = deno * num; i > 1; i--)
	{
		if ((deno % i == 0) && (num % i == 0))
		{
			num = num / i;
			deno = deno / i;
		}
	}
	
	numerator = num;
	denominator = deno;
}

void Rational::reduced(int &num, int &deno)
{
	
	for (int i = deno * num; i > 1; i--)
	{
		if ((deno % i == 0) && (num % i == 0))
		{
			num = num / i;
			deno = deno / i;
		}
	}
}

void Rational::addition(int aNum, int aDeno, int bNum, int bDeno)
{

	int outputNum = aNum * bDeno + bNum * aDeno;
	int outputDeno = bDeno * aDeno;
	reduced(outputNum, outputDeno);
	std::cout << outputNum << "/" << outputDeno << std::endl;
}

void Rational::subtraction(int aNum, int aDeno, int bNum, int bDeno)
{
	int outputNum = aNum * bDeno - bNum * aDeno;
	int outputDeno = bDeno * aDeno;
	reduced(outputNum, outputDeno);
	std::cout << outputNum << "/" << outputDeno << std::endl;
}

void Rational::multiplication(int aNum, int aDeno, int bNum, int bDeno)
{
	int outputNum = aNum * bNum;
	int outputDeno = aDeno * bDeno;
	std::cout << outputNum << "/" << outputDeno << std::endl;
}

void Rational::division(int aNum, int aDeno, int bNum, int bDeno)
{
	int outputNum = aNum * bNum;
	int outputDeno = aDeno * bDeno;
	reduced(outputNum, outputDeno);
	std::cout << outputNum << "/" << outputDeno << std::endl;
}

void Rational::toString(int aNum, int aDeno)
{
	std::cout << aNum << "/" << aDeno << std::endl;
}

void Rational::toDouble(int aNum, int aDeno)
{
	double outputNum = static_cast<double>(aNum);
	double outputDeno = static_cast<double>(aDeno);
	std::cout << outputNum << "/" << outputDeno << std::endl;
}

