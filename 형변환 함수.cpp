#include <iostream>
using std::endl;
using std::cout;

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
	operator int()
	{
		return x * y;
	}
};

int main()
{

	Point ob1(3, 5), ob2(4, 6);

	int i;
	i = ob1;
	cout << i << endl;
	cout << ob2 + 6 << endl;

	return 0;
}