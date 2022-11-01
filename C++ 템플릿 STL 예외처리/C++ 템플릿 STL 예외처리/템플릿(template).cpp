#include <iostream>

using std::cout;
using std::endl;

// overloading function의 경우 같은 이름으로 다른 기능을 하는 함수를 만들 수 있으나
// template를 사용하는 경우에 더 효과적으로 할 수 있다.

// overloading을 사용한 maximum 값 출력
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

// template 사용한 maximum 값 출력

// 구현 형식

// template <class 자료형 이름> 리턴형 함수이름(매개변수리스트)
template <class T> T Max(T i, T j)
{
	return i > j ? i : j;
}

// 리턴형, 매개변수 함수 정의까지 똑같은 경우에는 template로 나타낼 수 있다

int main()
{

	cout << "Max is : " << Max(1, 2) << endl;
	cout << "Max is : " << Max(1.5, 2.3) << endl;
	cout << "Max is : " << Max('A', 'B') << endl;

	return 0;
}