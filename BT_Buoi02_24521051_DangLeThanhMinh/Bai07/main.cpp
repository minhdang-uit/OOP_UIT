#include <iostream>
#include <iomanip>
#include "Vehicle.h"
using namespace std;

int main() {
    Vehicle xe1("Nguyen Van A", "Xe may", 2000000, 50);
    Vehicle xe2("Tran Van B", "Oto", 50000000, 180);
    Vehicle xe3;

    cout << "\nNhap thong tin cho xe 3:" << endl;
    xe3.input();

    cout << "\nThong tin cac xe:" << endl;
    cout << left << setw(20) << "Chu xe" << setw(20) << "Loai xe" << setw(15) << "Tri gia" << setw(15) << "Dung tich" << setw(15) << "Thue truoc ba" << endl;

    xe1.output();
    xe2.output();
    xe3.output();

    return 0;
}
