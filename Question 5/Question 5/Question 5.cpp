// Question 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Definitions.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

int main()
{
    Account account1(2000.00); //creating objects
    SavingAccount account2(40.0, .03); //creating objects
    CheckingAccount account3(80.0, 1.0); //creating objects

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Account 1 Balance: " << account1.getBalance() << std::endl;
    std::cout << "Saving Account Balance: " << account2.getBalance() << std::endl;
  

    std::cout << "Amount Withdrawn from account 1: " << account1.debit(60.0) << std::endl;
    std::cout << "Amount Withdrawn from Saving Account: " << account2.debit(60.0) << std::endl;
   

    std::cout << "Account 1 new Balance: " << account1.getBalance() << std::endl;
    std::cout << "Saving Account new Balance: " << account2.getBalance() << std::endl;
    

    std::cout << "Amount deposited into account 1: " << account1.credit(0.0) << std::endl;
    std::cout << "Amount deposited into Saving Account: " << account2.credit(50.0) << std::endl;
   

    std::cout << "Account 1 new Balance: " << account1.getBalance() << std::endl;
    std::cout << "Saving Account new Balance: " << account2.getBalance() << std::endl;
    

    double interestEarned = account2.calculateInterest();
    std::cout << "Interest earned on Saving Account: " << interestEarned << std::endl;
    account2.credit(interestEarned);

    std::cout << "Saving Account new Balance: " << account2.getBalance() << std::endl;
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
