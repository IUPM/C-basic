// this 포인터 

 /*this 포인터는 자동적으로 시스템이 만들어주는 포인터
 멤버가 호출될 때 그 멤버가 속한 객체를 가르킨다.
 객체를 통하여 멤버를 호출할 때 컴파일러는 객체의 포인터,
 즉 주소를 this포인터에 넣은 다음 멤버를 호출한다.*/

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