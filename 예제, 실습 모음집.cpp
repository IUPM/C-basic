//inline function example
/*#include <iostream>

inline int Double(int);
using namespace std;
int main()
{
	int target;
	cout << "Enter a number to work with : ";
	cin >> target;
	cout << endl;

	target = Double(target);
	cout << "target: " << target << endl;

	target = Double(target);
	cout << "Target: " << target << endl;
	return 0;
}

int Double(int target)
{
	return 2 * target;
}
*/

//practice Recursion (재귀함수) function
//a perfect example of recursive function, fibonacci sequence

/*#include <iostream>

using namespace std;

int fib(int n);

int main()
{
	int n, result;
	cout << "Enter number to find : ";
	cin >> n;
	cout << "\n\n";

	result = fib(n);

	cout << "result is " << result << " is the " << n << "th fib num" << endl;

	return 0;


}

int fib(int n)
{
	if (n < 3)
	{
		cout << "Return 1!" << endl;
		return 1;
	}
	else
	{
		cout << "Call fib(" << n - 2 << ") ";
		cout << "and fib(" << n - 1 << ") " << endl;
		return fib(n - 2) + fib(n - 1);
	}
}
*/

// practice c++ class
/*
#include <iostream>

using namespace std;

class Dog
{
public: // pubilc 선언을 해주지 않으면 class에 접근할 수 없다.
	unsigned int itsAge;
	unsigned int itsWeight;
	void bow_wow();
};

int main()
{

	unsigned int Grossweight;
	Dog hamu;
	hamu.itsAge = 12;
	cout << "Hamu is a dog who is " << hamu.itsAge << "years old" << endl;

}
*/

// pactice private, method stuff
/*#include <iostream>

class Dog
{
public:
	unsigned int GetAge();
	void SetAge(unsigned int Age);

	unsigned int GetWeight();
	void SetWeight(unsigned int Weight);
	void Bow_wow();
private:
	unsigned int itsAge;
	unsigned int itsWeight;
};*/

// example 1
/*
#include <iostream>

using namespace std;

class Dog
{
public:
	unsigned int Age;
	unsigned int Weight;
	void Bow_wow();
};

int main()
{
	Dog Hamu;
	Hamu.Age = 1;
	Hamu.Weight = 10;
	Hamu.Bow_wow;

	return 0;
}
*/

// example 2
/*
#include <iostream>

using namespace std;

class Car
{
public:
	void Start();
	void Accelerate();
	void Brake();
	void Setyear(int year);
	int Getyear();

private:
	int Year;
	char Model[255];
};

int main()
{
	Car morning;
	int bought;
	morning.Setyear(12);
	bought = morning.Getyear();
	morning.Start();
}
*/