#include <iostream>

using std::cout;
using std::endl;

int add(int a, int b)
{
	return (a + b);
}

double add(double a, double b)
{
	return (a + b);
}


int main()
{
	cout << "this is int function : ";
	cout << add(10, 20) << endl;
	
	cout << "this is double function : ";
	cout << add(10.2, 23.1) << endl;

	return 0;
}


#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b; // »ïÇ× ¿¬»êÀÚ.
}

double max(double a, double b)
{
	return a > b ? a : b;
}

char max(char a, char b)
{
	return a > b ? a : b;
}


int main()
{

	cout << "int function : ";
	cout << max(1, 2) << endl;

	cout << "double function : ";
	cout << max(7.5, 3.6) << endl;

	cout << "char function : ";
	cout << max('a', 'b') << endl;

	return 0;
}


#include <iostream>

using std::cout;
using std::endl;
template <class T>

T max(T a, T b)
{
	return a > b ? a : b; // »ïÇ× ¿¬»êÀÚ.
}

int main()
{

	cout << "int function : ";
	cout << max(1, 2) << endl;

	cout << "double function : ";
	cout << max(7.5, 3.6) << endl;

	cout << "char function : ";
	cout << max('a', 'b') << endl;

	
	return 0;
}
