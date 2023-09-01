// Demo on cast operator overloading

#include <iostream>
using namespace std;

double conRateRD(){ return 82.1; }

class Rupee{
	double r;
public:
	Rupee(){}
	Rupee(int val): r(val){}
	void print(){cout<<"Rupee: "<<r<<endl;}
};

class Doller{
	double d;
public:
	Doller(){}
	Doller(int val): d(val){}
	void print(){cout<<"Doller: "<<d<<endl;}
	operator Rupee() { return d*conRateRD(); }
};

int main()
{
	Doller d(10);
	Rupee r;
	d.print();
	r = d;
	r.print();

	return 0;
}

