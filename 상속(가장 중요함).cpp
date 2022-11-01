#include <iostream>

using std::endl;
using std::cout;

class A
{
private:
	int x;
public:
	void setX(int i)
	{
		x = i;
	}
	void showX()
	{
		cout << x << endl;
	}
};
class B :public A
{

};


int main()
{
	A aa;
	aa.setX(1);
	aa.showX();
	cout << "call from class A" << endl;
	B bb;
	bb.setX(10);
	bb.showX();
	cout << "call from class B" << endl;

	return 0;
}