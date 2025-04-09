/*Vi?t ch??ng trình cho phép ng??i dùng nh?p vào hai phân s?. Tính t?ng, hi?u,
tích, th??ng gi?a chúng và xu?t k?t qu? ra màn hình.*/

#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
	int Tuso;
	int Mauso;
};

void Input(PhanSo& ps)
{
	cin >> ps.Tuso >> ps.Mauso;
}
int UCLN(int a, int b)
{
	if (a % b) return b;
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
PhanSo TongPS(PhanSo& ps1, PhanSo& ps2)
{
	struct PhanSo result;
	result.Tuso = ps1.Tuso * ps2.Mauso + ps2.Tuso * ps1.Mauso;
	result.Mauso = ps1.Mauso * ps2.Mauso;

	return result;
}
PhanSo HieuPS(PhanSo& ps1, PhanSo& ps2)
{
	struct PhanSo result;
	result.Tuso = ps1.Tuso * ps2.Mauso - ps2.Tuso * ps1.Mauso;
	result.Mauso = ps1.Mauso * ps2.Mauso;

	return result;
}
PhanSo TichPS(PhanSo& ps1, PhanSo& ps2)
{
	struct PhanSo result;
	result.Tuso = ps1.Tuso * ps2.Tuso;
	result.Mauso = ps1.Mauso * ps2.Mauso;

	return result;
}
PhanSo ThuongPS(PhanSo& ps1, PhanSo& ps2)
{
	struct PhanSo result;
	result.Tuso = ps1.Tuso * ps2.Mauso;
	result.Mauso = ps1.Mauso * ps2.Tuso;

	return result;
}

void XuatPS(PhanSo& ps)
{
	if (ps.Mauso == 1)
		cout << ps.Tuso << endl;
	else cout << ps.Tuso << "/" << ps.Mauso << endl;
}

int main()
{
	struct PhanSo ps1;
	struct PhanSo ps2;

	Input(ps1);
	Input(ps2);

	RutGonPhanSo(ps1);
	RutGonPhanSo(ps2);

	PhanSo psTong = TongPS(ps1, ps2);
	PhanSo psHieu = HieuPS(ps1, ps2);
	PhanSo psTich = TichPS(ps1, ps2);
	PhanSo psThuong = ThuongPS(ps1, ps2);

	XuatPS(psTong);
	XuatPS(psHieu);
	XuatPS(psTich);
	XuatPS(psThuong);
}