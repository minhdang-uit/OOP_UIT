#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b;

    cout << "Nhap so phuc A:\n";
    a.nhap();

    cout << "Nhap so phuc B:\n";
    b.nhap();

    
    cout << "Tong 2 so phuc: ";
    a.cong(b).xuat();

    cout << endl;

    cout << "Hieu 2 so phuc: ";
    a.tru(b).xuat();

    cout << endl;

    cout << "Tich 2 so phuc: ";
    a.nhan(b).xuat();
    
    cout << endl;

    cout << "Thuong 2 so phuc: ";
    a.chia(b).xuat();

    cout << endl;

    return 0;
}