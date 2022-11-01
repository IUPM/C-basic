#include<iostream>

using std::endl;
using std::cout;

class A
{
private:
	int a;

public:
	A(int i)
	{
		a = i;
	}
	int getA() const
	{
		return a;
	}

};

class B : public A
{
private:
	int b;
public:
	B(int i, int j) : A(i)
	{
		b = j;
	}
	int getB() const
	{
		return b;
	}
};

class C : public B
{
private:
	int c;
public:
	C(int i, int j, int k) : B(i, j) // 매개변수 i, j 중에서 i는 class A로 들어간다.
	{
		c = k;
	}
	int getC() const
	{
		return c;
	}
	void show()
	{
		cout << getA() << " " << getB() << " " << c << endl;
	}
};

int main()
{
	C cc(10, 20, 30);  // 매개변수 10, 20은 class B로 넘어간다.
	cc.show();
	cout << cc.getA() << " " << cc.getB() << endl;

	return 0;
}


#include<iostream>

using std::endl;
using std::cout;

class B
{
private:
	double d;
public:
	B(double dd)
	{
		d = dd;
	}
	double getD()
	{
		return d;
	}
};

class D1 : public B
{
private:
	int i;
public:
	D1(double dd, int ii) : B(dd)
	{
		i = ii;
	}
	int getI()
	{
		return i;
	}
};

class D2 : public D1
{
private:
	char c;
public:
	D2(double dd, int ii, char cc) : D1(dd, ii)
	{
		c = cc;
	}
	void print()
	{
		cout << "Double : " << getD() << endl; // B멤버 호출
		cout << "Int : " << getI() << endl; // C멤버 호출
		cout << "Char : " << c << endl;
	}
};


int main()
{
	D2 d2(10.5, 10, 'H');
	cout << d2.getD() << " , " << d2.getI() << endl; // B, D1 멤버 호출
	d2.print();


	return 0;
}


#include<iostream>

using std::cout;
using std::endl;
using std::string;

class Airship
{
protected:
	int passenger;
	double cargo;
public:
	void a_show();
};
void Airship::a_show()
{
	cout << "passenger num : " << passenger << endl;
	cout << "cargo num : " << cargo << endl;
}
class Airplane : public Airship
{
private:
	char engine;
	double range;
public:
	Airplane(int p, double c, char e, double r)
	{
		passenger = p;
		cargo = c;
		engine = e;
		range = r;
	}
	void show();
};
class Balloon : public Airship
{
private:
	char gas;
	double altitude;
public:
	Balloon(int p, double c, char g, double a)
	{
		passenger = p;
		cargo = c;
		gas = g;
		altitude = a;
	}
	void show();
};

void Airplane::show()
{
	a_show();
	cout << "engine : ";
	cout << ((engine == 'p') ? "propeller\n" : "jett\n");
	cout << "operation range : " << range << endl;
}

void Balloon::show()
{
	a_show();
	cout << "gas : ";
	cout << ((gas == 'h') ? "helium\n" : "hydrogen\n");
	cout << "limit altitude : " << altitude << endl;
}

int main()
{
	Airplane B747(200, 50000.0, 'j', 10000.0);
	Balloon b(4, 100.0, 'h', 5000.0);
	B747.show();
	cout << endl;
	b.show();
	cout << endl;

	return 0;
}