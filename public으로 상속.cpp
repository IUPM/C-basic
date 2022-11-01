#include <iostream>

using std::cout;
using std::endl;

class A
{
private:
	int x;

public:
	void setX(int i)
	{
		x = 1;
	}
	void showX()
	{
		cout << x << endl;
	}
};

class B :public A
{
};

int main()
{
	A aa;
	aa.setX(1);
	aa.showX();
	B.bb;
	bb.setX(3);
	bb.showX();
	return 0;
}



#include <iostream>

using std::cout;
using std::endl;

class A
{
private:
	int x;

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

class B :public A
{
private:
	int y;
public:
	void setY(int i)
	{
		y = i;
	}
	void showXY()
	{
		showX();
		cout << y << endl;
	}
};

int main()
{
	A aa;
	aa.setX(1);
	aa.showX();
	B bb;
	bb.setX(3);
	bb.showX();
	B cc;
	cc.setX(2);
	cc.setY(10);
	cc.showX();
	cc.showXY();

	return 0;
}