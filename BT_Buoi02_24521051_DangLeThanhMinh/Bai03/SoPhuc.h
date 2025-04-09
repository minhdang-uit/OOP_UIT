#include <iostream>

using namespace std;

class SoPhuc
{
private:
	double real;
	double fake;
public:
	SoPhuc();
	SoPhuc(double real, double fake);
	void nhap();
	void xuat();

	void setThuc(double real);
	void setAo(double fake);
	double getThuc() const;
	double getAo() const;

	SoPhuc cong(const SoPhuc& sp) const;
	SoPhuc tru(const SoPhuc& sp) const;
	SoPhuc nhan(const SoPhuc& sp) const;
	SoPhuc chia(const SoPhuc& sp) const;
};

