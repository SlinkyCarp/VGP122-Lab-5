#pragma once

#include "Definitions.h"

class SavingsAcc
{
private:
	double savingBalance;
public:
	SavingsAcc(){}
	SavingsAcc(double value);
	static double annualInterestRate;
	void calculateMonthlyInterest();
	static void modifyInterestRate(double value);
	double getBalance();
};


// calculateMonthlyInterest = (annualInterestRate * savingsBalance)/12
// savingsBalance += calculateMonthlyInterest