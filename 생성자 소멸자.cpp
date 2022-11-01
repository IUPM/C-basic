#include <iostream>

// 생성자를 따로 호출하지 않아도 호출된다. 
// 생성자 : 멤버 변수를 초기화 할 수 있다
// 소멸자 : 메모리를 해제할 수 있다.  

using namespace std;

class myclass
{
public:
	myclass()
	{
		cout << "생성자가 호출되었다." << endl;
	}
	~myclass()
	{
		cout << "소멸자가 호출되었다." << endl;
	}
};

myclass globalObj; // 전역 오브젝트로 클래스를 찍어냄

void testLocalObj() // 지역 객체의 생성과 소멸을 테스트
{
	cout << "test local object start" << endl;
	myclass localobj;
	cout << "test local object fin" << endl;

}


int main()
{
	cout << "main function S" << endl;
	testLocalObj();
	cout << "main function fin" << endl;

	return 0;
}


// 생성자 소멸자 개념 정리
#include <iostream>

using std::cout;
using std::endl;

class Dog
{
private:
	int age = 1;
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

int main()
{
	Dog Hamu, Seaba;
	cout << Hamu.getAge() << Seaba.getAge() << endl;

	return 0;
}