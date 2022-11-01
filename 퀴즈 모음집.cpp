/*#include <iostream>

int main()
{
	std::cout << "I love c++" << std::endl;
}
*/

/*
day4_Quiz
두 개의 정수형 변수를 조사하여 큰 값을 작은 값으로 바꾸는
프로그램을 작성, 하나의 if, 하나의 else를 사용해야함

#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter num1 : ";
	cin >> a;
	int b;
	cout << "Enter num2 : ";
	cin >> b;
	if (a > b)
	{
		cout << "the large number is " << a << " ( num1 )" << endl;
	}
	else
	{
		cout << "the large number is " << b << " ( num2 )" << endl;
	}
	return 0;
}

*/

//the 5th Quiz
/*
Q1
Perimeter()라는 이름을 갖고 unsigned long int 값을 반환하며
unsigned short int 두개를 매개변수로 갖는 함수의 원형을 작성하자.

Q2 두개의 매개변수는 직사각형의 세로와 가로를 의미함.
Perimeter 함수는 둘레의 길이를 반환함

#include <iostream>

typedef unsigned long int ULI;
typedef unsigned short int USI;

using namespace std;

ULI Perimeter(USI a, USI b); // sol of Quiz 1

int main()
{
	int num1, num2, result;
	cout << "Enter the wide of a rectangle : ";
	cin >> num1;
	cout << "Enter the length of a rectangle : ";
	cin >> num2;

	result = Perimeter(num1, num2);

	cout << "Rectangular circumference is " << result << endl;

	return 0;
}

ULI Perimeter(USI a, USI b)
{
	return (a + b) * 2;
}*/