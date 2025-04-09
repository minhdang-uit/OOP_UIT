#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
	int Tuso;
	int Mauso;
};
void NhapPS(PhanSo &ps)
{
	cout << "Nhap tu so: ";
	cin >> ps.Tuso;
	
	cout << "Nhap mau so: ";
	cin >> ps.Mauso;
	while (ps.Mauso == 0)
	{
		cout << "Nhap lai mau so: ";
		cin >> ps.Mauso;
	}
}
int UCLN(int a, int b)
{
	if (a % b == 0)
		return b;
	return UCLN(b, a % b);
}
void RutGonPhanSo(PhanSo& ps)
{
	int uc = UCLN(ps.Tuso, ps.Mauso);
	ps.Tuso /= uc;
	ps.Mauso /= uc;

	if (ps.Mauso < 0)
	{
		ps.Tuso *= -1;
		ps.Mauso *= -1;
	}
}
void XuatPS(PhanSo& ps)
{
	cout << "Phan so sau khi rut gon: ";
	cout << ps.Tuso << "/" << ps.Mauso;
}

int main()
{
	PhanSo ps;
	NhapPS(ps);
	RutGonPhanSo(ps);
	XuatPS(ps);
}


