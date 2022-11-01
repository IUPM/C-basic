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
	A() // �����ڰ� �ִ� ��쿡�� default �����ڸ� ȣ������ ����
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