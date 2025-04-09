#include "ThoiGian.h"
#include <iostream>

using namespace std;

int main()
{
	cTime t;

	cout << "Nhap thoi gian ban dau: " << endl; t.nhap();

	cout << "Thoi gian ban dau: "; t.xuat();

	int x;
	cout << "nhap so 1 de tang thoi gian, nhap so 2 de giam thoi gian" << endl;
	cin >> x;

	if (x == 1)
	{
		int h, m, s;
		cout << "Nhap so gio muon tang: "; cin >> h;
		cout << "Nhap so phut muon tang: "; cin >> m;
		cout << "Nhap so giay muon tang: "; cin >> s;
		t.increaseHour(h);
		t.increaseMinute(m);
		t.increaseSecond(s);

		cout << "Thoi gian sau khi tang: "; t.xuat();
	}
	if (x == 2)
	{
		int h, m, s;
		cout << "Nhap so gio muon giam: "; cin >> h;
		cout << "Nhap so phut muon giam: "; cin >> m;
		cout << "Nhap so giay muon giam: "; cin >> s;
		t.decreaseHour(h);
		t.decreaseMinute(m);
		t.decreaseSecond(s);

		cout << "Thoi gian sau khi giam: "; t.xuat();
	}
}