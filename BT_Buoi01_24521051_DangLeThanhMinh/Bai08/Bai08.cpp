/*8. Viết chương trình cho phép người dùng nhập vào một ngày (ngày tháng năm).
Xuất ra thứ trong tuần của ngày đó.*/
#include <bits/stdc++.h>

using namespace std;

struct Date
{
	int day, month, year;
};

void Input(Date& date)
{
	int DayMax;
	cout << "Nhap ngay thang nam: ";
	cin >> date.day >> date.month >> date.year;

	while (date.year < 1582)
	{
		cout << "Nhap lai nam (nam > 1582): ";
		cin >> date.year;
	};

	while (date.month > 12 || date.month < 1)
	{
		cout << "Nhap lai thang: ";
		cin >> date.month;
	};

	switch (date.month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		DayMax = 30;
		break;
	case 2:
		DayMax = 28 + ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0);
		break;
	default:
		DayMax = 31;
	}

	while (date.day < 1 || date.day > DayMax)
	{
		cout << "Nhap lai ngay: ";
		cin >> date.day;
	};
}

string getDayofWeek(Date& date)
{
	int d = date.day;
	int m = date.month;
	int y = date.year;
	if (d < 3)
	{
		m += 12;
		y--;
	}

	int k = y % 100;
	int j = y / 100;

	int h = (d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

	string DayofWeek[] = { "Saturday","Sunday","Monday", "Tuesday","Wednesday","Thursday","Friday" };

	return DayofWeek[h];
}

void Output(Date& date)
{
	cout << date.day << "/" << date.month << "/" << date.year << " is " << getDayofWeek(date);
}
int main()
{
	Date date;

	Input(date);

	Output(date);
}