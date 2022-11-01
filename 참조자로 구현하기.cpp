


#include<iostream>

using std::endl;
using std::cout;

void swap(int&, int&);
int main()
{
	int a = 2, b = 5;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << "swap result in main function : " << a << " " << b << endl;

	return 0;
}

void swap(int& ra, int& rb)
{
	int temp;
	temp = ra;
	ra = rb;
	rb = temp;

	cout << "swap result in swap function : " << ra << " " << rb << endl;
}



#include<iostream>

using std::cout;
using std::endl;
int main(void)
{
	int num = 10;
	int& variable = num;
	cout << num << endl;
	cout << variable << endl;
	variable += 10;
	cout << num << endl;
	cout << variable << endl;

	return 0;
}