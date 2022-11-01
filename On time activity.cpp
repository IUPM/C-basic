#include <iostream>

using std::endl;
using std::cout;
using std::string;


template<class T1, class T2> 
class CCC
{
private:
	T1 x;
	T2 y;
public:
	CCC(T1 xx, T2 yy)
	{
		x = xx;
		y = yy;
	}
	void print()
	{
		cout << x << ", " << y << endl;
	}
};



// 클래스에서 template를 사용할 경우 인수에 대한 자료형을 같이 적어줘야함
int main()
{
	CCC<int, int> c1(10, 20);
	CCC<double, double> c2(2.5, 5.5);
	CCC<char, string> c3('I', "trust you");

	c1.print();
	c2.print();
	c3.print();
}