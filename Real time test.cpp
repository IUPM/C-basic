#include <iostream>

using std::endl;
using std::cout;

class A
{
private:

protected:
	int a, b;

public:
	void setAB(int i, int j)
	{
		a = i;
		b = j;
	}

};

class B : public A
{
private:
	int c;

public:
	void setC(int n)
	{
		c = n;
	}
	void showABC()
	{
		cout << a << b << c << endl;
	}
};

int main()
{

	A aa;
	B bb;

	//aa.a;
	//bb.b;
	bb.setAB(1, 2);
	bb.setC(3);
	bb.showABC();


	return 0;
}