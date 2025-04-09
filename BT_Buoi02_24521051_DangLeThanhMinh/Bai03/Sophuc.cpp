#include "SoPhuc.h"
#include <iostream>

using namespace std;

SoPhuc::SoPhuc() : real(0), fake(0) {}
SoPhuc::SoPhuc(double real, double fake)
	: real(real), fake(fake) {}

void SoPhuc::nhap()
{
	cout << "nhap phan thuc: ";
	cin >> real;
	cout << "nhap phan ao: ";
	cin >> fake;
}

void SoPhuc::xuat()
{
	if (fake >= 0)
		cout << real << "+" << fake << "i";
	else cout << real << "-" << fake << "i";
}

void SoPhuc::setThuc(double real)
{
	real = real;
}
void SoPhuc::setAo(double fake)
{
	fake = fake;
}

double SoPhuc::getThuc() const
{
	return real;
}
double SoPhuc::getAo() const
{
	return fake;
}

SoPhuc SoPhuc::cong(const SoPhuc& sp) const
{
	return SoPhuc(real + sp.real, fake + sp.fake);
}
SoPhuc SoPhuc::tru(const SoPhuc& sp) const
{
	return SoPhuc(real - sp.real, fake - sp.fake);
}
SoPhuc SoPhuc::nhan(const SoPhuc& sp) const
{
	return SoPhuc(real * sp.real - fake * sp.fake, real * sp.fake + fake * sp.real);
}
SoPhuc SoPhuc::chia(const SoPhuc& sp) const
{
	double mau = sp.real * sp.real + sp.fake * sp.fake;
	return SoPhuc(
		(real * sp.real + fake * sp.fake) / mau,
		(sp.real * fake - real * sp.fake) / mau
	);
}