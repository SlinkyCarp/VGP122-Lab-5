#pragma once
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double, double);
	int credit(double);
	bool debit(double);
private:
	double transactionFee;
	double chargeFee();
};


#endif // !CHECKING_H
