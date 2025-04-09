class Point
{
private:
	double x;
	double y;

public:
	Point() : x(0), y(0) {} 
	Point(double hoanhDo, double tungDo);

	void setHoanhDo(double hoanhDo);
	void setTungDo(double tungDo);

	double getHoanhDo() const;
	double getTungDo() const;

	void tinhtien(double dx, double dy);
	
	void nhap();
	void xuat();
};