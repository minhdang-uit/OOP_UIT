/*Viết chương trình cho phép người dùng nhập vào danh sách học sinh (thông tin
mỗi học sinh giống bài 5). Tìm và xuất thông tin học sinh có điểm trung bình cao
nhất, thấp nhất ra màn hình*/

#include <bits/stdc++.h>

using namespace std;

struct HocSinh
{
	string HoTen;
	float DiemToan;
	float DiemVan;
	float DTB;
};

void NhapThongTin(HocSinh& hs)
{
	cin.ignore();
	cout << "Ho Ten: ";
	getline(cin, hs.HoTen);

	cout << "DiemToan: ";
	cin >> hs.DiemToan;
	while (hs.DiemToan < 0 || hs.DiemToan > 10)
	{
		cout << "Nhap lai diem toan: ";
		cin >> hs.DiemToan;
	}

	cout << "Diem Van: ";
	cin >> hs.DiemVan;
	while (hs.DiemVan < 0 || hs.DiemVan > 10)
	{
		cout << "Nhap lai diem van: ";
		cin >> hs.DiemVan;
	}
}

float DiemTrungBinh(const HocSinh& hs)
{
	return (hs.DiemToan + hs.DiemVan) / 2;
}

void NhapDanhSach(vector<HocSinh>& ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin cua hoc sinh thu " << i + 1 << ": " << endl;
		NhapThongTin(ds[i]);
		ds[i].DTB = DiemTrungBinh(ds[i]);
	}
}

void XuatThongTin(const HocSinh& hs)
{
	cout << "Ho Ten: " << hs.HoTen << endl;
	cout << "Diem Toan: " << fixed << setprecision(2) << hs.DiemToan << endl;
	cout << "Diem Van: " << fixed << setprecision(2) << hs.DiemVan << endl;
	cout << "Diem Trung Binh: " << fixed << setprecision(2) << hs.DTB << endl;
}

HocSinh MaxHS(const vector<HocSinh>& ds)
{
	HocSinh Max = ds[0];
	for (int i = 1; i < ds.size(); i++)
		if (ds[i].DTB > Max.DTB)
			Max = ds[i];
	return Max;
}
HocSinh MinHS(vector<HocSinh>& ds)
{
	HocSinh Min = ds[0];
	for (int i = 1; i < ds.size(); i++)
		if (ds[i].DTB < Min.DTB)
			Min = ds[i];
	return Min;
}

int main()
{
	int n;
	cout << "Nhap so luong hoc sinh: ";
	cin >> n;

	vector<HocSinh> ds(n);

	NhapDanhSach(ds, n);

	HocSinh MaxHs = MaxHS(ds);
	HocSinh MinHs = MinHS(ds);

	cout << "Hoc sinh co DTB cao nhat: " << endl;
	XuatThongTin(MaxHs);

	cout << "Hoc sinh co DTB thap nhat: " << endl;
	XuatThongTin(MinHs);

	return 0;
}
