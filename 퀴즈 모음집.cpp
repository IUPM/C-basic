/*#include <iostream>

int main()
{
	std::cout << "I love c++" << std::endl;
}
*/

/*
day4_Quiz
�� ���� ������ ������ �����Ͽ� ū ���� ���� ������ �ٲٴ�
���α׷��� �ۼ�, �ϳ��� if, �ϳ��� else�� ����ؾ���

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
Perimeter()��� �̸��� ���� unsigned long int ���� ��ȯ�ϸ�
unsigned short int �ΰ��� �Ű������� ���� �Լ��� ������ �ۼ�����.

Q2 �ΰ��� �Ű������� ���簢���� ���ο� ���θ� �ǹ���.
Perimeter �Լ��� �ѷ��� ���̸� ��ȯ��

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