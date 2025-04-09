/*Vi?t ch??ng trình cho phép ng??i dùng nh?p vào hai phân s?, tìm phân s? l?n
nh?t và xu?t k?t qu? ra màn hình.*/

#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
	int Tuso;
	int Mauso;
};

void NhapPS(PhanSo& ps)
{
	cin >> ps.Tuso >> ps.Mauso;
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
bool KiemTraBangNhau(PhanSo& ps1, PhanSo& ps2)
{
	if (ps1.Tuso * ps2.Mauso == ps2.Tuso * ps1.Mauso)
		return 1;
	return 0;
}
PhanSo PhanSoLonNhat(PhanSo& ps1, PhanSo& ps2)
{
	if (ps1.Tuso * ps2.Mauso > ps2.Tuso * ps1.Mauso)
		return ps1;
	return ps2;
}
void XuatPS(PhanSo ps)
{
	cout << "Phan so lon nhat: ";
	if (ps.Mauso == 1)
		cout << ps.Tuso;
	else cout << ps.Tuso << "/" << ps.Mauso;
}
int main()
{
	PhanSo ps1;
	PhanSo ps2;
	NhapPS(ps1);
	NhapPS(ps2);
	RutGonPhanSo(ps1);
	RutGonPhanSo(ps2);
	if (KiemTraBangNhau(ps1, ps2))
		cout << "2 phan so bang nhau";
	else
	{
		PhanSo PSLonNhat = PhanSoLonNhat(ps1, ps2);
		XuatPS(PSLonNhat);
	}
}