#include "Date.h"
#include <iostream>
using namespace std;

string thuTrongTuan(int 
    dayOfWeek) {
    string thu[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    return thu[dayOfWeek];
}
    int main()
    {
        cDate date;

        cout << "Nhap ngay thang nam ban dau: " << endl;
        date.nhap();

        cout << "Ngay thang nam vua nhap: ";
        date.xuat();

        cout << endl;

        if (date.isLeapYear())
            cout << "Nam nay la nam nhuan." << endl;
        else
            cout << "Nam nay KHONG phai la nam nhuan." << endl;

        cout << "Thu trong tuan: " << thuTrongTuan(date.getDayOfWeek()) << endl;

        int x;
        cout << "\nLua chon thao tac:\n";
        cout << "1: Tang ngay\n";
        cout << "2: Giam ngay\n";
        cout << "3: Tang thang\n";
        cout << "4: Giam thang\n";
        cout << "5: Tang nam\n";
        cout << "6: Giam nam\n";
        cout << "Nhap lua chon: ";
        cin >> x;

        int value;
        switch (x) {
        case 1:
            cout << "Nhap so ngay muon tang: ";
            cin >> value;
            date.increaseDay(value);
            break;
        case 2:
            cout << "Nhap so ngay muon giam: ";
            cin >> value;
            date.decreaseDay(value);
            break;
        case 3:
            cout << "Nhap so thang muon tang: ";
            cin >> value;
            date.increaseMonth(value);
            break;
        case 4:
            cout << "Nhap so thang muon giam: ";
            cin >> value;
            date.decreaseMonth(value);
            break;
        case 5:
            cout << "Nhap so nam muon tang: ";
            cin >> value;
            date.increaseYear(value);
            break;
        case 6:
            cout << "Nhap so nam muon giam: ";
            cin >> value;
            date.decreaseYear(value);
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }


        cout << "Ngay sau thay doi: ";
        date.xuat();

        return 0;
    }