#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double hoanhDo, double tungDo)
{
	x = hoanhDo;
	y = hoanhDo;
}

void Point::setHoanhDo(double hoanhDo)
{
	x = hoanhDo;
}
void Point::setTungDo(double tungDo)
{
	y = tungDo;
}

double Point::getHoanhDo() const
{
	return x;
}

double Point::getTungDo() const
{
	return y;
}

void Point::tinhtien(double dx, double dy)
{
	x += dx;
	y += dy;
}

void Point::nhap()
{
	cout << "x = ";
	cin >> x;
	
	cout << "y = ";
	cin >> y;
}

void Point::xuat()
{
	cout << "(" << x << "," << y << ")";
}