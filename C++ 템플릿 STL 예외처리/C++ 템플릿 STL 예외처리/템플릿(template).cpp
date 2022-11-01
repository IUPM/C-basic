#include <iostream>

using std::cout;
using std::endl;

// overloading function�� ��� ���� �̸����� �ٸ� ����� �ϴ� �Լ��� ���� �� ������
// template�� ����ϴ� ��쿡 �� ȿ�������� �� �� �ִ�.

// overloading�� ����� maximum �� ���
/*
int max(int i, int j)
{
	return i > j ? i : j;
}

char max(char i, char j)
{
	return i > j ? i : j;
}

double max(double i, double j)
{
	return i > j ? i : j;
}

int main()
{
	cout << "Max is : " << Max(1, 2) << endl;
	cout << "Max is : " << Max(1.5, 2.3) << endl;
	cout << "Max is : " << Max('A', 'B') << endl;

	return 0;
}

*/

// template ����� maximum �� ���

// ���� ����

// template <class �ڷ��� �̸�> ������ �Լ��̸�(�Ű���������Ʈ)
template <class T> T Max(T i, T j)
{
	return i > j ? i : j;
}

// ������, �Ű����� �Լ� ���Ǳ��� �Ȱ��� ��쿡�� template�� ��Ÿ�� �� �ִ�

int main()
{

	cout << "Max is : " << Max(1, 2) << endl;
	cout << "Max is : " << Max(1.5, 2.3) << endl;
	cout << "Max is : " << Max('A', 'B') << endl;

	return 0;
}