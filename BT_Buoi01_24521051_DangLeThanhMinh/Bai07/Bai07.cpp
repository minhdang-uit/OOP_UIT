/*Viết chương trình cho phép người dùng nhập vào một ngày (ngày tháng năm).
Kiểm tra tính hợp lệ và xuất ra màn hình ngày kế tiếp.*/

#include <bits/stdc++.h>

using namespace std;

struct NgayThangNam
{
	int ngay;
	int thang;
	int nam;
};
void NhapNgayThangNam(NgayThangNam& date)
{
	cout << "Nhap ngay: ";
	cin >> date.ngay;

	cout << "Nhap thang: ";
	cin >> date.thang;

	cout << "Nhap nam: ";
	cin >> date.nam;
}
bool kiemtraNamNhuan(int nam)
{
	return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int SoNgayTrongThang(int thang, int nam)
{
	if (thang == 2)
		return kiemtraNamNhuan(nam) ? 29 : 28;
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		return 30;
	else return 31;
}

bool kiemtraNgayHopLe(const NgayThangNam& date)
{
	if (date.nam < 1 || date.thang < 1 || date.thang > 12)
		return false;
	int NgayTrongThang = SoNgayTrongThang(date.thang, date.nam);

	return date.ngay >= 1 && date.ngay <= NgayTrongThang;
}
NgayThangNam NgayKeTiep(NgayThangNam date)
{
	int ngaytrongthang = SoNgayTrongThang(date.thang, date.nam);

	if (date.ngay == ngaytrongthang)
	{
		date.ngay = 1;
		if (date.thang == 12)
		{
			date.thang = 1;
			date.nam++;
		}
		else date.thang++;
	}
	else date.ngay++;

	return date;
}

int main()
{
	NgayThangNam date;

	NhapNgayThangNam(date);

	if (kiemtraNgayHopLe(date))
	{
		NgayThangNam nextDate = NgayKeTiep(date);
		cout << "Ngay ke tiep: " << nextDate.ngay << "/" << nextDate.thang << "/" << nextDate.nam << endl;
	}
	else cout << "Ngay khong hop le" << endl;
}
