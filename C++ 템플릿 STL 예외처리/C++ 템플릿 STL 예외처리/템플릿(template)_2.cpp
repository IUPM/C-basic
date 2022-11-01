#include <iostream>

using std::endl;
using std::cout;

template <class T1, class T2> void fun(T1 x, T2 y)
// 구현 자체는 x, y 출력이지만 매개변수 자료형이 T1과 T2로 다르다.
{
	cout << x << " " << y << endl;
}
int main()
{
	fun("Han", 30);  // T1은 문자열(const char*) , T2는 정수형(int)
	fun(25, 50.5);	 // T1은 정수형(int), T2는 double형

	return 0;
}