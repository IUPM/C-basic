// class practice & analysis

#include <iostream>

using namespace std;

class Dog // start class define Ŭ���� ���� ����
{
public:   // start pubilc area ���� �κ� ����
	int Getage(); // ������ �Լ�
	void Setage(int age); // ������ �Լ�
	void bow_wow(); // �Ϲ� �Լ�
private: // ���� �κ� ����
	int itsAge; // ��� ����
};

// ���� ������ �Լ� Getage�� itsAge ����� ���� �����Ѵ�.
int Dog::Getage()
{
	return itsAge;
}

// ���� ������ �Լ� Setage ����, 
// ��� ���� itsAge�� age�� ���޵� �� �����ϱ�
void Dog::Setage(int age)
{
	itsAge = age;
}

// bow wow method ����, �������� : void,  �Ű������� ����, ���� : ȭ�鿡 bowwow���
void Dog::bow_wow()
{
	cout << "bow wow!" << endl;
}

// Dog ����, age ����, bowwow ���, age��� �Ŀ� �ٽ� bowwow����ϱ�
int main()
{
	Dog hamu;
	hamu.Setage(5);
	hamu.bow_wow();
	cout << "Hamu is a dog who is " << hamu.Getage() << " years oid." << endl;
	hamu.bow_wow();
	return 0;
}
