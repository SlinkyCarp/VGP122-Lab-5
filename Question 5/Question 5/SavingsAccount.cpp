#include "SavingsAccount.h"
#include "Definitions.h"

SavingAccount::SavingAccount(double initialBalance, double rate) : Account (initialBalance)
{
	if (rate >= 0.0f)
	{
		interestRate = rate;
	}
	else
	{
		std::cout << "Invalid amount. Must be greater than 0.0" << std::endl;
	}
}

double SavingAccount::calculateInterest()
{
	return getBalance() * interestRate;
}
