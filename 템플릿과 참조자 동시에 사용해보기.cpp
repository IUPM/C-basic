#include <iostream>

using std::endl;
using std::cout;


template <class T> void Swap(T& x, T& y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

// normal function code

/*
void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
*/

int main()
{
	int i1 = 2, i2 = 5;
	char c1 = 'a', c2 = 'f';
	double d1 = 3.5, d2 = 5.5;

	cout << i1 << ", " << i1 << endl;
	Swap(i1, i2);
	cout << i1 << ", " << i2 << endl;
	
	cout << c1 << ", " << c2 << endl;
	Swap(c1, c2);
	cout << c1 << ", " << c2 << endl;

	cout << d1 << ", " << d2 << endl;
	Swap(d1, d2);
	cout << d1 << ", " << d2 << endl;

	return 0;

}