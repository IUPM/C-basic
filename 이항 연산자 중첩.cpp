#include <iostream>
using std::cout;
using std::endl;


class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	Point operator +(Point ob)
	{
		Point temp;
		temp.x = x + ob.x;
		temp.y = y + ob.y;
		return temp;
	}

};
int main()
{
	Point ob1(3, 5), ob2(4, 6), ob3;
	cout << ob3.getX() << "," << ob3.getY() << " " << endl;
	ob3 = ob1 + ob2;
	cout << ob3.getX() << "," << ob3.getY() << " ";

	return 0;
}