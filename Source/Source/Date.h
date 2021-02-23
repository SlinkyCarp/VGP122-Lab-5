#pragma once

#include "Definitions.h"

class Date
{
private:
	int day;
	int month;
	int year;

public:

	Date(int day, int month, int year) : day(day), month(month), year(year)
	{
	}

	int getDay();
	void setDay(int day);
	int getMonth();
	void setMonth(int month);
	int getYear();
	void setYear(int year);
	int getDate();
};