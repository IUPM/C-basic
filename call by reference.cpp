// call by reference �� ���� ����
// return value�� �ϳ��� �ƴ� ��쳪 �迭 ��ü�� �����ϴ� ��� ����Ѵ�.

#include<iostream>

using std::endl;
using std::cout;

int sum(int* pa, int* pb);// ���ĸŰ������� �ּҸ� �޾ƾ� �ϹǷ� �����ͺ����� ����

int main()
{
	int a = 2, b = 5, c = 0;
	c = sum(&a, &b);   // �ǸŰ������� �ּҸ� ���ĸŰ������� ����


	cout << a << " " << b << " " << c << " " << endl;


	return 0;


}

int sum(int* pa, int* pb)
{
	*pa = *pa + 2;
	*pb = *pb + 5;

	return (*pa + *pb);
}

// call by reference �� 2���� ���

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