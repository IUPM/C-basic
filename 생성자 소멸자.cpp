#include <iostream>

// �����ڸ� ���� ȣ������ �ʾƵ� ȣ��ȴ�. 
// ������ : ��� ������ �ʱ�ȭ �� �� �ִ�
// �Ҹ��� : �޸𸮸� ������ �� �ִ�.  

using namespace std;

class myclass
{
public:
	myclass()
	{
		cout << "�����ڰ� ȣ��Ǿ���." << endl;
	}
	~myclass()
	{
		cout << "�Ҹ��ڰ� ȣ��Ǿ���." << endl;
	}
};

myclass globalObj; // ���� ������Ʈ�� Ŭ������ ��

void testLocalObj() // ���� ��ü�� ������ �Ҹ��� �׽�Ʈ
{
	cout << "test local object start" << endl;
	myclass localobj;
	cout << "test local object fin" << endl;

}


int main()
{
	cout << "main function S" << endl;
	testLocalObj();
	cout << "main function fin" << endl;

	return 0;
}


// ������ �Ҹ��� ���� ����
#include <iostream>

using std::cout;
using std::endl;

class Dog
{
private:
	int age = 1;
public:
	int getAge();
	void setAge(int a);
};

int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age = a;
}

int main()
{
	Dog Hamu, Seaba;
	cout << Hamu.getAge() << Seaba.getAge() << endl;

	return 0;
}