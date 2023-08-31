//use of forward dec of a class

#include <iostream>

using namespace std;
class B;
class A
{
	int x;
public:
	A(int val){ this->x = val; }
	friend int calc(A &,B &);
};

class B{
	int y;
public:
	B(int val){ this->y = val; }
	friend int calc(A &,B &);
};

int calc(A &a, B &b)
{
	return(a.x + b.y);
}

int main()
{
	A a(10);
	B b(20);
	cout<<calc(a,b)<<endl;

	return 0;
}