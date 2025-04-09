#pragma once
#include <iostream>

using namespace std;

class cPhanSo
{
private:
	int TuSo, MauSo;
public:
	cPhanSo();
	cPhanSo(int tu, int mau);
	void Nhap();
	void Xuat();
	cPhanSo Cong(const cPhanSo& ps) const;
	cPhanSo Tru(const cPhanSo& ps) const;
	cPhanSo Nhan(const cPhanSo& ps) const	;
	cPhanSo Chia(const cPhanSo& ps) const;
};
