// ���� ��� ���(heap)�� ������ ��� �� �ǽ�
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	int LocalVariable = 5;
	int* pLocal = &LocalVariable;
	int* pHeap = new int;
	*pHeap = 7;
	cout << "localVariable: " << LocalVariable << endl;
	cout << "*pLocal : " << *pLocal << endl;
	cout << "*pHeap : " << *pHeap << endl;
	delete pHeap;
	pHeap = new int;
	*pHeap = 9;
	cout << "*pHeap : " << *pHeap << endl;
	delete pHeap;



	return 0;
}


#include <iostream>

using std::cout;
using std::endl;

// new�� delete�� �̿��Ͽ� ���� ��� ����(Heap)�� ��ü �����ϱ�

class Simplecat
{
private:
	int itsAge;
public:
	Simplecat();
	~Simplecat();
};
Simplecat::Simplecat()
{
	cout << "Constructor Called" << endl;
	itsAge = 1;
}
Simplecat::~Simplecat()
{
	cout << "Distructor Called" << endl;
}

int main()
{
	cout << "Simple cat ham..." << endl;
	Simplecat ham;
	cout << "SimpleCat *pRags = new SimpleCat..." << endl;
	Simplecat* pRag = new Simplecat;
	cout << "delete pRags..." << endl;
	delete pRag;
	cout << "Exiting, watch han go..." << endl;

	return 0;
}

// ������ ��ü�� ���� ���� ����

#include <iostream>

using std::cout;
using std::endl;

class Dog
{
private:
	int itsAge;
public:
	int getAge()
	{
		return itsAge;
	}
	void setAge(int a)
	{
		itsAge = a;
	}
};

int main()
{
	Dog Hamu, * pHamu;
	pHamu = &Hamu;
	Hamu.setAge(2);
	cout << "Pointer Hamu's age : " << (*pHamu).getAge() << ", just hamu age : " << Hamu.getAge() << endl;
	(*pHamu).setAge(1);
	cout << "Pointer Hamu's age : " << (*pHamu).getAge() << ", just hamu age : " << Hamu.getAge() << endl;

	return 0;
}

#include <iostream>
// -> �����ڸ� �̿��Ͽ� �� ��ü�� ������ ��� �����ϱ�

using std::cout;
using std::endl;


class SimpleDog
{
private:
	int itsAge;
public:
	int getAge() const
	{
		return itsAge;
	}
	void setAge(int a)
	{
		itsAge = a;
	}
};


int main()
{
	SimpleDog* pHamu = new SimpleDog;
	pHamu->setAge(2);
	cout << "Hamu is " << pHamu->getAge() << " years old" << endl;
	pHamu->setAge(3);
	cout << "Hamu is " << pHamu->getAge() << " years old" << endl;

}


// 2. -> �����ڷ� ���ٵǴ� ������ ����μ��� ������

#include<iostream>

using std::cout;
using std::endl;

class SimpleDog
{
private:
	int* itsAge;
	int* itsWeight;
public:
	SimpleDog();
	~SimpleDog();
	int GetAge() const
	{
		return *itsAge;
	}
	void SetAge(int a)
	{
		*itsAge = a;
	}

};
SimpleDog::SimpleDog()
{
	cout << "Constructor called" << endl;
	itsAge = new int(2);
	itsWeight = new int(10);
}

SimpleDog::~SimpleDog()
{
	cout << "Distructor called" << endl;
	delete itsAge;
	delete itsWeight;
}

int main()
{
	SimpleDog* pHamu = new SimpleDog;
	cout << "pHamu is " << pHamu->GetAge() << " years old" << endl;
	pHamu->SetAge(5);
	cout << "pHamu is " << pHamu->GetAge() << " years old" << endl;
	delete pHamu;
}

// ���� �޸� �Ҵ�(�ʿ��� ��ŭ�� �޸𸮸� ����� �Ҵ�)

#include<iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	int i, n;
	int* num;

	cout << "setup array size : ";
	cin >> i;

	num = new int[i];
	if (num == NULL)
	{
		cout << "is not working" << endl;
		exit(1); // ����
	}

	for (n = 0; n < i; n++)
	{
		cout << "enter the number : ";
		cin >> num[n];
	}
	for (n = 0; n < i; n++)
	{
		cout << num[n] << " , ";
	}
	delete[] num;
	return 0;
}