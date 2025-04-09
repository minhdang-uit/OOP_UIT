class cDate
{
private:
	int day;
	int month;
	int year;
public:
	cDate();
	cDate(int d, int m, int y);
	
	void nhap();
	void xuat();

	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void increaseDay(int d);
	void increaseMonth(int m);
	void increaseYear(int y);

	void decreaseDay(int d);
	void decreaseMonth(int m);
	void decreaseYear(int y);

	bool isLeapYear() const;
	int getDayOfWeek() const; // 0 = Sunday, ..., 6 = Saturday

	int daysInMonth(int m, int y) const;

	void normalizeDate();
};