#include <iostream>

using namespace std;

//using std::cout;
//using std::endl;


template <class T>


T Max(T a, T b)
{
	return a > b ? a : b; // ���� ������.
}


int main()
{

	cout << "int max : ";
	cout << Max(1, 2) << endl;

	cout << "double max : ";
	cout << Max(7.5, 3.6) << endl;

	cout << "char max : ";
	cout << Max('a', 'b') << endl;


	return 0;
}
