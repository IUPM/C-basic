#include <iostream>

using std::endl;
using std::cout;


class A
{
private:
	int x; // int x = 10;
public:
	void setX(int i)
	{
		x = i;
	}
	void showX()
	{
		cout << x << endl;
	}
};

class B : private A
{
private:
	int y;
public:
	void setY(int i)
	{
		y = i;
	}
	void showY()
	{
		showX();
		cout << y << endl;
	}
};


int main()
{
	A aa;
	B bb;

	aa.setX(1);
	aa.showX();
	bb.setX(1);
	bb.setY(2);

	bb.showX();
	bb.showY();

	return 0;
}