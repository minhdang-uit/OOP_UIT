/*Viết chương trình cho phép người dùng nhập họ tên, điểm toán, điểm văn của
một học sinh. Tính điểm trung bình và xuất kết quả ra màn hình.*/

#include <bits/stdc++.h>

using namespace std;

struct HocSinh
{
	string HoTen;
	float Toan;
	float Van;
	float DTB;
};

void Input(HocSinh& hs)
{
	cout << "Ho Ten: ";
	getline(cin, hs.HoTen);


	cout << "Diem Toan: ";
	cin >> hs.Toan;

	while (hs.Toan < 0 || hs.Toan > 10)
	{
		cout << "Nhap lai diem Toan: ";
		cin >> hs.Toan;
	}

	cout << "Diem Van: ";
	cin >> hs.Van;

	while (hs.Van < 0 || hs.Van > 10)
	{
		cout << "Nhap lai diem Van: ";
		cin >> hs.Van;
	}
}
void DiemTrungBinh(HocSinh& hs)
{
	hs.DTB = (hs.Toan + hs.Van) / 2;
}
void Output(const HocSinh& hs)
{
	cout << "Ket Qua: " << endl;
	cout << "Ho Ten: " << hs.HoTen << endl;
	cout << "Diem Toan: " << fixed << setprecision(2) << hs.Toan << endl;
	cout << "Diem Van: " << fixed << setprecision(2) << hs.Van << endl;
	cout << "Diem Trung Binh: " << fixed << setprecision(2) << hs.DTB << endl;
}

int main()
{
	HocSinh hs;
	Input(hs);
	DiemTrungBinh(hs);
	Output(hs);
}