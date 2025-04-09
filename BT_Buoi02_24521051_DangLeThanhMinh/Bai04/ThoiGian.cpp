#include "ThoiGian.h"
#include <iostream>
#include <cmath>

using namespace std;

cTime::cTime() : hour(0), minute(0), second(0) {}
cTime::cTime(int h, int m, int s) : hour(h), minute(m), second(s)
{
	normalizeTime();
}

void cTime::nhap()
{
	cout << "Nhap gio: "; cin >> hour;
	cout << "Nhap phut: "; cin >> minute;
	cout << "Nhap giay: "; cin >> second;
	normalizeTime();
}

void cTime::xuat()
{
	cout << (hour < 10 ? "0" : "") << hour << ":";
	cout << (minute < 10 ? "0" : "") << minute << ":";
	cout << (second < 10 ? "0" : "") << second << endl;
}

void cTime::setHour(int h)
{
	hour = h;
	normalizeTime();
}

void cTime::setMinute(int m)
{
	minute = m;
	normalizeTime();
}

void cTime::setSecond(int s)
{
	second = s;
	normalizeTime();
}

int cTime::getHour() const
{
	return hour;
}

int cTime::getMinute() const
{
	return minute;
}

int cTime::getSecond() const
{
	return second;
}

void cTime::increaseHour(int h)
{
	hour += h;
	normalizeTime();
}

void cTime::increaseMinute(int m)
{
	minute += m;
	normalizeTime();
}

void cTime::increaseSecond(int s)
{
	second += s;
	normalizeTime();
}

void cTime::decreaseHour(int h)
{
	hour -= h;
	normalizeTime();
}

void cTime::decreaseMinute(int m)
{
	minute -= m;
	normalizeTime();
}

void cTime::decreaseSecond(int s)
{
	second -= s;
	normalizeTime();
}

void cTime::normalizeTime()
{
	if (second < 0)
	{
		int borrow = (abs(second) + 59) / 60;
		minute -= borrow;
		second += borrow * 60;
	}

	if (second >= 60)
	{
		minute += second / 60;
		second %= 60;
	}

	if (minute < 0)
	{
		int borrow = (abs(minute) + 59) / 60;
		hour -= borrow;
		minute += borrow * 60;
	}

	if (minute >= 60)
	{
		hour += minute / 60;
		minute %= 60;
	}

	if (hour < 0)
	{
		hour = (24 + (hour % 24)) % 24;
	}
	hour %= 24;
}