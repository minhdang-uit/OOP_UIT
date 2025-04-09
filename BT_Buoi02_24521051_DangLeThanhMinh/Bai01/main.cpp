#include "cPhanSo.h"
#include <iostream>

using namespace std;

int main()
{
	cPhanSo ps1, ps2;

	cout << "Nhap phan so thu nhat: " << endl;
	ps1.Nhap();

	cout << "Nhap phan so thu hai: " << endl;
	ps2.Nhap();

	cout << "Tong cua 2 phan so: ";
	ps1.Cong(ps2).Xuat();

	cout << "Hieu cua 2 phan so: ";
	ps1.Tru(ps2).Xuat();

	cout << "Tich cua 2 phan so: ";
	ps1.Nhan(ps2).Xuat();

	cout << "Thuong cua 2 phan so: ";
	ps1.Chia(ps2).Xuat();
	
	cout << endl;
	return 0;
}