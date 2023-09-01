#include <iostream>

using namespace std;

class Base{
public:
	virtual void disp() {cout<<"Hello Base"<<endl;}

};

class Derived: public Base{
public:
	void disp() {cout<<"Hello Drived"<<endl;}

};

int main()
{
	Base *bptr = new Derived();
	bptr->disp();
	/*Derived *dptr = (Derived *)new Base();
	dptr->disp();
	*/
	return 0;
}