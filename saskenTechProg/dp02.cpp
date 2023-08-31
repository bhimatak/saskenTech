#include <iostream>

using namespace std;

class A{
	int a;
	int g;
public:
	A(){}
	A(int x1, int x2){a = x1; g=x2;}
	void displayA(){cout<<a<<endl;
	cout<<g<<endl;
	}
};

class B:virtual public A{
	int b;
public:
	B(){}
	B(int x){b = x;}
	void displayB(){cout<<b<<endl;}
};

class C:virtual public A{
	int c;
public:
	C(){}
	C(int x){c = x;}
	void displayC(){cout<<c<<endl;}
};

class D:public B, public C{
	int d;
public:
	D(int x1,int x2, int x3, int x4, int x5):C(x2),B(x3),A(x1,x5) {d = x4;}
	void displayD(){cout<<d<<endl;}
};

int main()
{
	D d1(10,20,30,40, 50);
	d1.displayA();
	d1.displayB();
	d1.displayC();
	d1.displayD();
	return 0;

}