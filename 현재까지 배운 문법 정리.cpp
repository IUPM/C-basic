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
		name = "���ٽ�";
	}
	Dog(int age)
	{
		this->age = age;
		weight = 1;
		name = "�Ϲ�";
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
		cout << i << "��° ������ �̸�" << endl;
	}
	Dog Hamu(10),*p; /// ���ڸ� ������ ��ü�� ���ڸ� ������ �ʴ� ������ ��ü ����
	
	
	Dog *pHamu = new Dog; // ���� �޸� �Ҵ����� ��ü ����
	
	if (!pHamu) // ���� pHamu�� �������� �ʾ��� ��쿡 exit����.
	{
		cout << "no room for this command" << endl;
		exit(1);
	}

	pHamu->setAge(3); // �����ͷ� ������ ��ü�� age ����

	cout << pHamu->getAge(); // �����ͷ� ������ ��ü�� age ���

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