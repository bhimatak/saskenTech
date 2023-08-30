#include <iostream>
#include <stdio.h>

using namespace std;

class Test
{
	static int a;
	int x;

public:
	static int static_func() { 
		// a += x;
		// return a;
		this->x; 
	}
	
	Test(){ a++; }
	~Test() { 

		cout<<"a: "<<a--<<endl; }
	int getA(){ return a; }
	void setA(int x) { a=x;}
	
};

int Test::a=20;

int main()
{
	// Test t1,t2,t3;
	// t1.setA(10);
	cout<<Test::static_func()<<endl;
	return 0;
}