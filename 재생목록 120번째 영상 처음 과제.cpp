#include<iostream>

using std::endl;
using std::cout;
using std::string;

class Man
{
private:
	int age;
	string name;
public:
	Man(string s, int a)
	{
		name = s;
		age = a;
	}
	string get_name() const
	{
		return name;
	}
	int get_age() const
	{
		return age;
	}

};

class Student : public Man
{
private:
	string Class;
	int id;

public:
	Student(string s, int a, string c, int j) : Man(s, a)
	{
		Class = c;
		id = j;
	}
	void show_Student()
	{
		cout << "name : " << get_name() << endl << "age : " << get_age() << endl;
		cout << "class : " << Class << endl << "Student id : " << id << endl;
	}

};

class professor : public Man
{
private:
	string major;
	string subject;
public:
	professor(string s, int a, string m, string c) : Man(s, a)
	{
		major = m;
		subject = c;
	}
	void show_professor()
	{
		cout << "name : " << get_name() << endl << "age : " << get_age() << endl;
		cout << "major :" << major << endl << "subject : " << subject << endl;
	}
};

int main()
{
	Student seo("서민호", 20, "c반", 202012000);
	professor smile_Han("한미소", 40, "전산", "Cpp programing");


	seo.show_Student();
	smile_Han.show_professor();
}