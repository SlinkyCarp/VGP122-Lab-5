#include "Definitions.h"
#include "Invoice.h"


void Invoice::setPartNumber(std::string partNumber)
{
	partNumber = partNumber;
}

std::string Invoice::getPartNumber()
{
	return partNumber;
}

void Invoice::setPartDescription(std::string partDescription)
{
	partDescription = partDescription;
}

std::string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setPartQty(int partQty)
{
	if (partQty <= 0)
	{
		partQty = 0;
	}
	else
	{
		partQty = partQty;
	}
}

int Invoice::getPartQty()
{
	return partQty;
}

void Invoice::setPartPrice(int partPrice)
{
	if (partPrice >= 0)
	{
		partPrice = partPrice;
	}
	else
	{
		partPrice = 0;
	}
}

int Invoice::getPartPrice()
{
	return partPrice;
}

int Invoice::getTotalInvoice()
{
	return partPrice * partQty;
}