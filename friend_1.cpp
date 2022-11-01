#include<iostream>

using std::cout;
using std::endl;
using std::string;
class Cat;   // 전방참조

class Dog
{
private:
	int age;
public:
	Dog(int a)
	{
		age = a;
		cout << "bow-wow" << endl;
	}
	int getage();
	friend string com(Dog d, Cat c);
};
class Cat
{
private:
	int age;
public:
	Cat(int a)
	{
		age = a;
		cout << "meow" << endl;
	}
	int getage();
	friend string com(Dog d, Cat c);
};

int Dog::getage()
{
	return age;
}
int Cat::getage()
{
	return age;
}

string com(Dog d, Cat c)
{
	return(d.age == c.age) ? "same age" : "not same"
}