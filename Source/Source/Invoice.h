#pragma once

#include "Definitions.h"

class Invoice
{
private:
	std::string partNumber;
	std::string partDescription;
	int partQty;
	int partPrice;

public:
	
	Invoice(std::string partNumber, std::string partDescription, int partQty, int partPrice) : partNumber(partNumber), partDescription(partDescription), partQty(partQty), partPrice(partPrice)
	{
	}

	void setPartNumber(std::string partNumber);
	std::string getPartNumber();
	void setPartDescription(std::string partDescription);
	std::string getPartDescription();
	void setPartQty(int partQty);
	int getPartQty();
	void setPartPrice(int partPrice);
	int getPartPrice();
	int getTotalInvoice();

};