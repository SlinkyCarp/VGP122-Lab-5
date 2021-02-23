// Source.cpp : This file contains the 'main' function. Program execution begins and ends there.
// LAB %
// Sharath Ravishankar

#include "Definitions.h"
#include "Invoice.h"
#include "Date.h"
#include "SavingsAcc.h"
#include "Rational.h"

//Question 1

/*
int main()
{
	
	Invoice invoice1("1FHU7", "This is a part", 20, 90);
	std::cout << "Total Invoice 1:- \n" << std::endl;
	std::cout << " Partnumber is: " << invoice1.getPartNumber() << "\n Part Description is: " << invoice1.getPartDescription() << " \n Part Price is: " << invoice1.getPartPrice() << " \n Part Qty is: " << invoice1.getPartQty() << " \n Invoice total is " << invoice1.getTotalInvoice() << std::endl;

	return 0;
}
*/

//Question 2

/*
int main()
{
	Date date1(15, 12, 2012);
	std::cout << date1.getDate() << std::endl;

	return 0;
}
*/

//Question 3


int main()
{
	Rational c(2, 6);
	c.addition(2, 2, 6, 2);
	std::cout << std::endl;
	c.toString(4, 6);
	std::cout << std::endl;
	c.toDouble(3, 6);
	std::cout << std::endl;
	c.multiplication(2, 3, 8, 1);
	std::cout << std::endl;
	c.division(4, 6, 9, 2);
	std::cout << std::endl;
	return 0;
}


//Question 4
/*
int main()
{
	
	SavingsAcc saver1(2000.00);
	SavingsAcc::modifyInterestRate(0.03);
	std::cout << "First month with interest balance: \n" << std::endl;
	saver1.calculateMonthlyInterest();
	std::cout << saver1.getBalance() << std::endl;

	SavingsAcc saver2(3000.00);
	SavingsAcc::modifyInterestRate(0.04);
	std::cout << "First month with interest balance: \n" << std::endl;
	saver2.calculateMonthlyInterest();
	std::cout << saver2.getBalance();


	return 0;
}
*/

//Question 5
/*
int main()
{
	See the other attached file
}
*/

//Question 6
/*
	Virtual functions - It can be redfined by the derived class.
	Pure virtual functions - It should be defined in the derived class as the base class only carries its declaration.
*/

//Question 7
/*
	Polymorphism - It allows users to reuse methods and attributes within the derived classes.
				   Software written to invoke polymorphic behavior is written independently of the specific types of the objects to which messages are sent
				   New types of objects that can respond to existing messages can be incorporated into such a system without modifying base system
				   Only client code that instantiates new objects must be modified to accommodate new types
	
	
	
	*/
