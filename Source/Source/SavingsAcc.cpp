#include "Definitions.h"
#include "SavingsAcc.h"

SavingsAcc::SavingsAcc(double value)
{
	savingBalance = value;
}

double SavingsAcc::annualInterestRate(0);

void SavingsAcc::calculateMonthlyInterest()
{
	savingBalance += (savingBalance * annualInterestRate) / 12;
}

void SavingsAcc::modifyInterestRate(double value)
{
	annualInterestRate = value;
}

double SavingsAcc::getBalance()
{
	return savingBalance;
}
