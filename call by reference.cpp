// call by reference 에 대한 예제
// return value가 하나가 아닌 경우나 배열 전체를 전달하는 경우 사용한다.

#include<iostream>

using std::endl;
using std::cout;

int sum(int* pa, int* pb);// 형식매개변수는 주소를 받아야 하므로 포인터변수로 받음

int main()
{
	int a = 2, b = 5, c = 0;
	c = sum(&a, &b);   // 실매개변수의 주소를 형식매개변수로 전달


	cout << a << " " << b << " " << c << " " << endl;


	return 0;


}

int sum(int* pa, int* pb)
{
	*pa = *pa + 2;
	*pb = *pb + 5;

	return (*pa + *pb);
}

// call by reference 의 2가지 방법

#include <iostream>

using std::endl;
using std::cout;

void swap(int*, int*);

int main()
{
	int a = 2, b = 5;
	cout << a << " " << b << endl;

	swap(&a, &b);
	cout << "main-function swap : ";
	cout << a << " " << b << endl;
	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	cout << "in-function swap : ";
	cout << *pa << " " << *pb << endl;
}