#include <iostream>

using namespace std;

class cTime
{
private:
	int hour;
	int minute;
	int second;
public:
	cTime();
	cTime(int h, int m, int s);
	void nhap();
	void xuat();

	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);

	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	void increaseHour(int h);
	void increaseMinute(int m);
	void increaseSecond(int s);

	void decreaseHour(int h);
	void decreaseMinute(int m);
	void decreaseSecond(int s);

	void normalizeTime();
};