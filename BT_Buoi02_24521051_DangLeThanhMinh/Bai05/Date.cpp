#include "Date.h"
#include <iostream>

using namespace std;

cDate::cDate() : day(0), month(0), year(0) {};
cDate::cDate(int d, int m, int y) : day(d), month(m), year(y)
{
	normalizeDate();
}

void cDate::nhap() {
	cout << "Nhap ngay: "; cin >> day;
	cout << "Nhap thang: "; cin >> month;
	cout << "Nhap nam: "; cin >> year;
	normalizeDate();
}

void cDate::xuat()
{
	cout << (day < 10 ? "0" : "") << day << "/";
	cout << (month < 10 ? "0" : "") << month << "/";
	cout << year;
}

void cDate::setDay(int d)
{
	day = d;
	normalizeDate();
}

void cDate::setMonth(int m) 
{
	month = m;
	normalizeDate();
}

void cDate::setYear(int y)
{
	year = y;
	normalizeDate();
}

int cDate::getDay() const
{
	return day;
}

int cDate::getMonth() const
{
	return month;
}

int cDate::getYear() const
{
	return year;
}

void cDate::increaseDay(int d)
{
	day += d;
	normalizeDate();
}

void cDate::increaseMonth(int m)
{
	month += m;
	normalizeDate();
}

void cDate::increaseYear(int y)
{
	year += y;
	normalizeDate();
}

void cDate::decreaseDay(int d)
{
	day -= d;
	normalizeDate();
}

void cDate::decreaseMonth(int m)
{
	month -= m;
	normalizeDate();
}

void cDate::decreaseYear(int y)
{
	year -= y;
	normalizeDate();
}

bool cDate::isLeapYear() const
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int cDate::daysInMonth(int m, int y) const
{
	if (m == 2)
		return isLeapYear() ? 29 : 28;
	else if (m == 4 || m == 6 || m == 9 || m == 11)
		return 30;
	else return 31;
}

void cDate::normalizeDate() 
{
	while (day > daysInMonth(month, year)) 
	{
		day -= daysInMonth(month, year);
		month++;
		if (month > 12) 
		{
			month = 1;
			year++;
		}
	}
	while (day <= 0) 
	{
		month--;
		if (month <= 0) 
		{
			month = 12;
			year--;
		}
		day += daysInMonth(month, year);
	}

	while (month > 12) 
	{
		month -= 12;
		year++;
	}

	while (month <= 0) 
	{
		month += 12;
		year--;
	}
}
int cDate::getDayOfWeek() const
{
	int d = day, m = month, y = year;
	if (m < 3) {
		m += 12;
		y -= 1;
	}
	int k = y % 100;
	int j = y / 100;
	int f = d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;
	return f % 7;
}

