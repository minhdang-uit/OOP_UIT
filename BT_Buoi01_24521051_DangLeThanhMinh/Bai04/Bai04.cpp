/*4. Viết chương trình cho phép người dùng nhập vào một dãy gồm n phân số. Tìm
và xuất ra màn hình phân số lớn nhất. Sắp xếp dãy phân số tăng dần/giảm dần.*/

#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
	int TuSo;
	int MauSo;
};

int ucln(int a, int b)
{
	if (a % b == 0) return b;
	return ucln(b, a % b);
}

void NhapPS(PhanSo& ps)
{
	cin >> ps.TuSo;
	cin >> ps.MauSo;
	while (ps.MauSo == 0)
	{
		cout << "Nhap lai mau so: ";
		cin >> ps.MauSo;
	}
	int uc = ucln(ps.TuSo, ps.MauSo);
	ps.TuSo /= uc;
	ps.MauSo /= uc;

	if (ps.MauSo < 0)
	{
		ps.TuSo *= -1;
		ps.MauSo *= -1;
	}
}

bool TangDan(const PhanSo& a, const PhanSo& b)
{
	return (a.TuSo * b.MauSo < b.TuSo * a.MauSo);
}

bool GiamDan(const PhanSo& a, const PhanSo& b)
{
	return (a.TuSo * b.MauSo > b.TuSo * a.MauSo);
}

void InPhanSo(const PhanSo& ps)
{
	if (ps.MauSo == 1)
		cout << ps.TuSo;
	else cout << ps.TuSo << "/" << ps.MauSo;
}

int main()
{
	//Nhap so luong phan so
	int n;
	cin >> n;

	vector<PhanSo> array(n);

	for (int i = 0; i < n; i++)
		NhapPS(array[i]);

	//Tim PS lon nhat
	PhanSo maxPS = array[0];
	for (int i = 1; i < n; i++)
		if (GiamDan(array[i], maxPS))
			maxPS = array[i];

	cout << "Phan so lon nhat: ";
	InPhanSo(maxPS);
	cout << endl;

	cout << "day phan so theo thu tu tang dan: ";
	sort(array.begin(), array.end(), TangDan);
	for (int i = 0; i < n; i++)
	{
		InPhanSo(array[i]);
		cout << " ";
	}
	cout << endl;

	cout << "day phan so theo thu tu giam dan: ";
	sort(array.begin(), array.end(), GiamDan);
	for (int i = 0; i < n; i++)
	{
		InPhanSo(array[i]);
		cout << " ";
	}
}
