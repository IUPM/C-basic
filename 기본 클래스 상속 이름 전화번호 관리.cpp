#include <iostream>

using std::endl;
using std::cout;
using std::string;

class Name
{
private:
	string name;
public:
	void get_Name(string c)
	{
		name = c;
	}

	void print_name()
	{
		cout << name << "'s Phone number is : ";
	}
};

class Phone : public Name
{
private:
	string phone;
public:
	void get_phone(string s)
	{
		phone = s;
	}
	void print_phone()
	{
		print_name();
		cout << phone;
	}
};


int main()
{
	Phone h;
	h.get_Name("smile seo");
	h.get_phone("3042-9420");
	h.print_phone();

	return 0;
}