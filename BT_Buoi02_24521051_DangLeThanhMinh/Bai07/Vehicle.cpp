#include "Vehicle.h"
#include <iostream>
#include <iomanip>
using namespace std;

Vehicle::Vehicle() : owner(""), type(""), price(0), engineCapacity(0) {}

Vehicle::Vehicle(string owner, string type, double price, double engineCapacity)
    : owner(owner), type(type), price(price), engineCapacity(engineCapacity) {
}

void Vehicle::setOwner(string owner) {
    this->owner = owner;
}

void Vehicle::setType(string type) {
    this->type = type;
}

void Vehicle::setPrice(double price) {
    if (price >= 0) this->price = price;
    else cout << "Tr? giá xe không h?p l?!" << endl;
}

void Vehicle::setEngineCapacity(double engineCapacity) {
    if (engineCapacity >= 0) this->engineCapacity = engineCapacity;
    else cout << "Dung tích xylanh không h?p l?!" << endl;
}

string Vehicle::getOwner() const {
    return owner;
}

string Vehicle::getType() const {
    return type;
}

double Vehicle::getPrice() const {
    return price;
}

double Vehicle::getEngineCapacity() const {
    return engineCapacity;
}

double Vehicle::calculateTax() const {
    if (engineCapacity < 100) return price * 0.01;
    else if (engineCapacity >= 100 && engineCapacity <= 200) return price * 0.03;
    else return price * 0.05;
}

void Vehicle::input() {
    cout << "Nhap ten chu xe: ";
    getline(cin, owner);
    cout << "Nhap loai xe: ";
    getline(cin, type);
    cout << "Nhap tri gia xe (>= 0): ";
    cin >> price;
    cout << "Nhap dung tich xylanh (>= 0): ";
    cin >> engineCapacity;
    cin.ignore();
}

void Vehicle::output() const {
    cout << left << setw(20) << owner
        << left << setw(20) << type
        << setw(15) << fixed << setprecision(2) << price
        << setw(15) << engineCapacity
        << setw(15) << fixed << setprecision(2) << calculateTax() << endl;
}
