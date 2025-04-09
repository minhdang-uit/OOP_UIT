#include <iostream>
#include "String.h"  
using namespace std;

int main() {
    String s1, s2;

    cout << "Nhap chuoi thu nhat: ";
    s1.input();

    cout << "Nhap chuoi thu hai: ";
    s2.input();

    cout << "\nChuoi 1: ";
    s1.output();
    cout << "Chuoi 2: ";
    s2.output();

    cout << "\nDo dai chuoi 1: " << s1.length() << endl;

    s1.concat(s2);
    cout << "Sau khi noi chuoi 2 vao chuoi 1: ";
    s1.output();

    s1.reverse();
    cout << "Sau khi dao chuoi: ";
    s1.output();

    s1.toUpper();
    cout << "Chuoi chu hoa: ";
    s1.output();

    s1.toLower();
    cout << "Chuoi chu thuong: ";
    s1.output();

    return 0;
}
