#include "CheckingAccount.h"
#include "Definitions.h"

CheckingAccount::CheckingAccount(double initialBalance, double fee) : Account (initialBalance)
{
	if (fee >= 0.0f)
	{
		transactionFee = fee;
	}
	else
	{
		std::cout << "Invalid entry. Fee must greater than 0.0." << std::endl;
	}
}

int CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	chargeFee();
	return 0;
}

bool CheckingAccount::debit(double amount)
{
	bool success = Account::debit(amount); //checks if money was debited/ withdrawn from the account from the class ACCOUNT. Passing it through a bool minimizes 
	{
		if (success)
		{
			chargeFee();
			return true;
		}
		else
		{
			return false;
		}
	}
}

double CheckingAccount::chargeFee()
{
	Account::setBalance(getBalance() - transactionFee);
	std::cout << "transaction fee charged " << transactionFee << std::endl;
	return 0;
}
