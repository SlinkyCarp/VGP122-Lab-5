#include "Definitions.h"
#include "Date.h"


void Date::setDay(int day)
{
	day = day;
}

int Date::getDay()
{
	return day;
}

void Date::setMonth(int month)
{
	if (month >= 1 && month <= 12)
	{
		month = month;
	}
	else
	{
		month = 1;
	}
}

int Date::getMonth()
{
	return month;
}

void Date::setYear(int year)
{
	year = year;
}

int Date::getYear()
{
	return year;
}

int Date::getDate()
{
	std::cout << " The date is " << day << "/" << month << "/" << year << std::endl;
	return 0;
}