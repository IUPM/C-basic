#include <iostream>

using std::endl;
using std::cout;

template <class T1, class T2> void fun(T1 x, T2 y)
// ���� ��ü�� x, y ��������� �Ű����� �ڷ����� T1�� T2�� �ٸ���.
{
	cout << x << " " << y << endl;
}
int main()
{
	fun("Han", 30);  // T1�� ���ڿ�(const char*) , T2�� ������(int)
	fun(25, 50.5);	 // T1�� ������(int), T2�� double��

	return 0;
}