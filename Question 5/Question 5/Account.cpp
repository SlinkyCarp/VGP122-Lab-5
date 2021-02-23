#include "Definitions.h"
#include "Account.h"

Account::Account(double initialBalance)
{
	if (initialBalance > 0.0f)
	{
		balance = initialBalance;
	}
	else
	{
		std::cout << "Invalid Entry. Balance cannot be negative!" << std::endl;
	}
}

int Account::credit(double amount)
{
	return balance = balance + amount;
}

bool Account::debit(double amount)
{
	if (amount > balance)
	{
		std::cout << "Amount is greater than balance. Invalid Entry" << std::endl;
		return false;
	}
	else
	{
		balance = balance - amount;
		return balance;
	}
	
}

void Account::setBalance(double amount)
{
	balance = amount;
}

double Account::getBalance()
{
	return balance;
}
