// this ������ 

 /*this �����ʹ� �ڵ������� �ý����� ������ִ� ������
 ����� ȣ��� �� �� ����� ���� ��ü�� ����Ų��.
 ��ü�� ���Ͽ� ����� ȣ���� �� �����Ϸ��� ��ü�� ������,
 �� �ּҸ� this�����Ϳ� ���� ���� ����� ȣ���Ѵ�.*/

#include <iostream>

using std::cout;
using std::endl;

class Dog
{
private:
	int age;
public:
	Dog(int a)
	{
		cout << "Constructor Called" << endl;
		this->age = a;
		cout << this << endl;
		cout << "Constructor Part end" << endl;
	}
	~Dog()
	{
		cout << "Destructor Called" << endl;
		cout << this << endl;
		cout << "Destructor Part end" << endl;
	}
	int getAge();
	void setAge(int a);

};
int Dog::getAge()
{
	cout << "this is getAge part" << endl;
	cout << this;
	return this->age;
}
void Dog::setAge(int a)
{
	cout << "this is setAge part" << endl;
	this->age = a;
	cout << this;
	cout << "setAge part done" << endl;
}


int main()
{
	Dog Hamu(5);
	cout << "this is Hamu address :" << &Hamu << endl;
	cout << Hamu.getAge() << endl;
}