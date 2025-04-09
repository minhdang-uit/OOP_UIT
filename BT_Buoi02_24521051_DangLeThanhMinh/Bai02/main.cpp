#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	Point diem;

	cout << "nhap toa do cua diem: " << endl;
	diem.nhap();

	cout << "toa do diem vua nhap: ";
	diem.xuat();

	cout << endl;

	double newX, newY;

	cout << "nhap hoanh do moi: ";
	cin >> newX;
	diem.setHoanhDo(newX);

	cout << "nhap tung do moi: ";
	cin >> newY;
	diem.setTungDo(newY);

	cout << "toa do diem sau khi thay doi: ";
	diem.xuat();

	cout << endl;

	double dx, dy;
	cout << "nhap gia tri tinh tien theo hoanh do: ";
	cin >> dx;
	cout << "nhap gia tri tinh tien theo tung do: ";
	cin >> dy;

	diem.tinhtien(dx, dy);

	cout << "toa do diem sau khi tinh tien: ";
	diem.xuat();

	cout << endl;

	return 0;
}