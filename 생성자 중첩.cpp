#include <iostream>

using std::cout;
using std::endl;

class Dog
{
private:
	int age;
public:
	Dog()
	{
		age = 1;
	}
	Dog(int a)
	{
		age = a;
	}
	~Dog();
	int getage() const
	{
		return age;
	}
	void setage(int a)
	{
		age = a;
	}
};
Dog::~Dog()
{
	cout << "destructor called" << endl;
}

int main()
{
	Dog Hamu(5), Ham;
	cout << Hamu.getage() << " , " << Ham.getage() << endl;

	return 0;
}


#include <iostream>

using std::cout;
using std::endl;

class Dog
{
private:
	int age;
public:

	Dog()
	{
		age = 1;
	}
	Dog(int a)
	{
		age = a;
	}
	~Dog()
	{
		cout << "destructor called" << endl;
	}
	int getAge() const
	{
		return age;
	}
	void setAge(int a)
	{
		age = a;
	}
};

int main()
{
	Dog Hamu[5];
	Dog Ham[5] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)
	{
		cout << Hamu[i].getAge() << " , " << Ham[i].getAge() << endl;
	}


	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>

using std::cout;
using std::endl;

class Date
{
private:
	int day, month, year;
public:
	Date(const char* s)
	{
		sscanf(s, "%d%*c%d%*c%d", &month, &day, &year);
	}
	Date(int m, int d, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void print()
	{
		cout << year << "³â " << month << "¿ù " << day << "ÀÏ " << endl;
	}
};

int main()
{
	Date d1("3/1/20");
	Date d2(10, 1, 2020);
	d1.print();
	d2.print();

	return 0;
}
