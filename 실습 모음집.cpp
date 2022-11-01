// class practice & analysis

#include <iostream>

using namespace std;

class Dog // start class define 클래스 정의 시작
{
public:   // start pubilc area 범용 부분 시작
	int Getage(); // 접근자 함수
	void Setage(int age); // 접근자 함수
	void bow_wow(); // 일반 함수
private: // 전용 부분 시작
	int itsAge; // 멤버 변수
};

// 범용 접근자 함수 Getage는 itsAge 멤버의 값을 전달한다.
int Dog::Getage()
{
	return itsAge;
}

// 범용 접근자 함수 Setage 정의, 
// 멤버 변수 itsAge에 age로 전달된 값 설정하기
void Dog::Setage(int age)
{
	itsAge = age;
}

// bow wow method 정의, 전달형식 : void,  매개변수는 없음, 동작 : 화면에 bowwow출력
void Dog::bow_wow()
{
	cout << "bow wow!" << endl;
}

// Dog 생성, age 설정, bowwow 출력, age출력 후에 다시 bowwow출력하기
int main()
{
	Dog hamu;
	hamu.Setage(5);
	hamu.bow_wow();
	cout << "Hamu is a dog who is " << hamu.Getage() << " years oid." << endl;
	hamu.bow_wow();
	return 0;
}
