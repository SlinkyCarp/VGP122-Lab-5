#pragma once
#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class SavingAccount : public Account
{
public:
	SavingAccount(double, double); //constructor for savings account for two values initial balance and interest rate 
	double calculateInterest(); // nneeds to be a function as it will be multiplying interest rate by the account balance
private:
	double interestRate;

};
#endif // !SAVINGS_H
