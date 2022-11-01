#include <iostream>

using std::cout;
using std::endl;

class Point
{
private:
	int x;
	int y;
public:
	Point(int i, int j)
	{
		x = i;
		y = j;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void upPrint()
	{
		++x;
		++y;
		cout << x << " " << y << endl;
	}
	Point up() // 이부분은 Point operator ++()과 같음
	{
		++x;
		++y;
		return *this;
	}
};

int main()
{
	Point p1(3, 4);
	p1.upPrint();
	p1.up();
	cout << p1.getX() << ",";
	cout << p1.getY();

	return 0;
}
