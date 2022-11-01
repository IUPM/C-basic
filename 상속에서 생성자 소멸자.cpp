#include<iostream>

using std::endl;
using std::cout;

class A
{
private:

public:
	A()
	{
		cout << "called instructor" << endl;
	}
	~A()
	{
		cout << "called destructor" << endl;
	}
};


class B : public A
{
private:

public:
	B()
	{
		cout << "called class B instructor" << endl;
	}
	~B()
	{
		cout << "called class B destuctor" << endl;
	}
};

int main()
{
	B test;

	return 0;
}

#include<iostream>

using std::cout;
using std::endl;

class A
{
private:
	int a;

public:
	A(int i)
	{
		cout << "class A instructor" << endl;
		a = i;
	}
	~A()
	{
		cout << "class A destructor" << endl;
	}
	void showA()
	{
		cout << a << endl;
	}
};

class B : public A
{
private:
	int b;
public:
	B(int i, int j) :A(i)
	{
		cout << "class B instructor" << endl;
		b = j;
	}
	~B()
	{
		cout << "class B destructor" << endl;
	}
	void showB()
	{
		cout << b << endl;
	}
};


int main()
{
	B bb(10, 20);
	bb.showA();
	bb.showB();
	return 0;


	return 0;
}