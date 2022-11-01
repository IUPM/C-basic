#include<iostream>

using std::endl;
using std::cout;
using std::cin;

void greaterNum(int a, int b);
int pow(int a, int b);

int main()
{
	int num1, num2;
	cout << "enter two num : ";
	cin >> num1 >> num2;

	cout << endl;

	
	greaterNum(num1, num2);

	cout << " " << num1 << "^" << num2 << "=" << pow(num1, num2) << endl;

	return 0;
}

void greaterNum(int a, int b)
{
	if (a > b)
	{
		cout << a << "is the greater than " << b << endl;
	}

	else
	{
		cout << b << "is the greater than " << a << endl;
	}
}

int pow(int a, int b)
{
	int j = 1;
	for (int i = 0; i < b; i++)
	{
		j *= a;
	}
	return a;
}