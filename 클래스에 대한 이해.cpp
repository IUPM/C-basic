/*
// ����ü ����
struct Man
{
	char name[7];
	int age; // ��� ����
};
*/

/*
// Ŭ���� ����
class Man
{
private:
	int age; // ��� ����
public:
	int getAge()
	{
		return age;
	}
	void set(int a)
	{
		age = a;
	}
};
*/

/*
//Ŭ���� �ҽ��ڵ� �ۼ�
class Integer
{
private: // private�� ������ ��쿡�� class �ȿ����� ��� �����ϴ�.
	// c++�� ��쿡�� class���� �׳� �ۼ��ϴ� ���, default ������ private���� ����ȴ�.
	int val;
public: // public�� ��쿡�� �ܺο��� ������ �����ϰ� private�� ������ ����� �� �ִ�.
	// �ϳ��� ������ ���ؼ��� ������ ����ϴ� getter, ������ �����ϴ� setter�� �ʿ��ϴ�.
	int getval();
	int setval();
};


// ��ü�� ����� ���ؼ��� �Ʒ��� �������� ǥ���Ѵ�.
Integer ma1;
*/

// class�ȿ��� ����Լ��� �����ϴ� ����� �ְ� class �ۿ��� �����ϴ� ��� ���� �����Ѵ�.
// 1. class �ȿ��� ����Լ��� �����ϴ� ���
/*class Dog
{
private: 
	int Age;
public:
	int getAge()
	{
		return Age;
	}
	void setAge(int a)
	{
		Age = a;
	}
};

int main()
{
	int x;
	Dog hamu;
	
	return 0;
}
*/

// 2. class �ۿ��� ����Լ��� �����ϴ� ���
/*#include <iostream>

using namespace std;

class Dog
{
private:
	int age;
public:
	int getAge();
	void setAge(int a);
};

int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age = a;
}
*/
