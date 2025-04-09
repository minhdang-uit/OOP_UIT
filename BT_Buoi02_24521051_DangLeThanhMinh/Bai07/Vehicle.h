
#include <string>
#include <iostream>
using namespace std;

class Vehicle {
private:
    string owner;
    string type;
    double price;
    double engineCapacity;

public:
    Vehicle();
    Vehicle(string owner, string type, double price, double engineCapacity);

    void setOwner(string owner);
    void setType(string type);
    void setPrice(double price);
    void setEngineCapacity(double engineCapacity);

    string getOwner() const;
    string getType() const;
    double getPrice() const;
    double getEngineCapacity() const;

    double calculateTax() const;

    void input();

    void output() const;
};
