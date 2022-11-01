#include <iostream>

using std::endl;
using std::cout;

class A
{
private:
	int x;
public:
	void setX(int i)
	{
		x = i;
	}
	int getX()
	{
		return x;
	}
};

int main()
{
	A a1;
	cout << a1.getX() << endl;
	return 0;
}

#include <iostream>

using std::endl;
using std::cout;

class A
{
private:
	int x = 1;
public:
	A() // 생성자가 있는 경우에는 default 생성자를 호줄하지 않음
	{
		x = 2;
	}
	//A() :x(2) {}
	void setX(int i)
	{
		x = i;
	}
	int getX()
	{
		return x;
	}
};

int main()
{
	A a1;
	cout << a1.getX() << endl;
	return 0;
}