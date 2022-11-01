#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

class Dog
{
private:
	int age;
	int weight;
	const char* name;
public:
	Dog()
	{
		age = 1;
		weight = 2;
		name = "세바스";
	}
	Dog(int age)
	{
		this->age = age;
		weight = 1;
		name = "하무";
	}
	~Dog()
	{
		cout << "Destructor called" << endl;
	}
	int getAge() const
	{
		return age;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getWeight() const
	{
		return weight;
	}
	void setWeight(int a)
	{
		weight = a;
	}
	const char* getname()
	{
		return name;
	}
	void setname(const char* pname)
	{
		name = pname;
	}
	void bow_wow() const
	{
		cout << "bow wow" << endl;
	}
};

int main()
{

	int num, page;
	cout << "how many dog you want in your apartment : ";
	cin >> num;
	Dog* pDog = new Dog[num];
	for (int i = 0; i < num; i++)
	{
		cout << i << "번째 강아지 이름" << endl;
	}
	Dog Hamu(10),*p; /// 인자를 가지는 객체와 인자를 가지지 않는 포인터 객체 생성
	
	
	Dog *pHamu = new Dog; // 동적 메모리 할당으로 객체 생성
	
	if (!pHamu) // 만약 pHamu가 생성되지 않았을 경우에 exit선언.
	{
		cout << "no room for this command" << endl;
		exit(1);
	}

	pHamu->setAge(3); // 포인터로 생성한 객체의 age 설정

	cout << pHamu->getAge(); // 포인터로 생성한 객체의 age 출력

	cout << Hamu.getAge() << endl;

	Hamu.setAge(3);
	Hamu.bow_wow();
	p = &Hamu;
	p->setAge(25);
	cout << Hamu.getAge() << endl;
	cout << Hamu.getname() << endl;
	delete []pDog;
	delete pHamu;
	return 0;
}