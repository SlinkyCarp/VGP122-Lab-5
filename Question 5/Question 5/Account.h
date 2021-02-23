#pragma once
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account
{

	double balance;
public:
	Account(double);
	int credit(double);
	bool debit(double);
	void setBalance(double amount);
	double getBalance();
};

#endif // !ACCOUNT_H_
