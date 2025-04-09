#include "cPhanSo.h"
#include <iostream>

using namespace std;


cPhanSo::cPhanSo()
{
	TuSo = 0;
	MauSo = 1;
}

cPhanSo::cPhanSo(int tu, int mau)
{
	TuSo = tu;
	MauSo = mau;
}
void cPhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> TuSo;

	cout << "Nhap mau so: ";
	cin >> MauSo;
}

void cPhanSo::Xuat()
{
	if (MauSo == 1)
		cout << TuSo << endl;
	else
		cout << TuSo << "/" << MauSo << endl;
}

cPhanSo cPhanSo::Cong(const cPhanSo &ps) const
{
	int t = TuSo * ps.MauSo + MauSo * ps.TuSo;
	int m = MauSo * ps.MauSo;
	return cPhanSo(t, m);
}

cPhanSo cPhanSo::Tru(const cPhanSo& ps) const
{
	int t = TuSo * ps.MauSo - MauSo * ps.TuSo;
	int m = MauSo * ps.MauSo;
	return cPhanSo(t, m);
}

cPhanSo cPhanSo::Nhan(const cPhanSo& ps) const
{
	int t = TuSo * ps.TuSo;
	int m = MauSo * ps.MauSo;
	return cPhanSo(t, m);
}
cPhanSo cPhanSo::Chia(const cPhanSo& ps) const
{
	int t = TuSo * ps.MauSo;
	int m = MauSo * ps.TuSo;
	return cPhanSo(t, m);
}


