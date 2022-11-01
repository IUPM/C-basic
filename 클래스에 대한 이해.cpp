/*
// 구조체 예시
struct Man
{
	char name[7];
	int age; // 멤버 변수
};
*/

/*
// 클래스 예시
class Man
{
private:
	int age; // 멤버 변수
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
//클래스 소스코드 작성
class Integer
{
private: // private로 선언한 경우에는 class 안에서만 사용 가능하다.
	// c++의 경우에는 class에서 그냥 작성하는 경우, default 값으로 private값이 적용된다.
	int val;
public: // public의 경우에는 외부에서 접근이 가능하고 private의 변수를 담아줄 수 있다.
	// 하나의 변수를 위해서는 변수를 출력하는 getter, 변수를 세팅하는 setter가 필요하다.
	int getval();
	int setval();
};


// 객체를 만들기 위해서는 아래의 형식으로 표현한다.
Integer ma1;
*/

// class안에서 멤버함수를 정의하는 방법이 있고 class 밖에서 정의하는 방법 역시 존재한다.
// 1. class 안에서 멤버함수를 정의하는 경우
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

// 2. class 밖에서 멤버함수를 정의하는 경우
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
