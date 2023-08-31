#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

class B
{
	
public:
	B(){ cout<<"Ctor of Base"<<endl; }
	virtual ~B(){ cout<<"Dtor of Base"<<endl; }
	
};

class D:public B
{
	
public:
	D(){ cout<<"Ctor of Drived"<<endl; }
	~D(){ cout<<"Dtor of Drived"<<endl; }
	
};

int main()
{
	B *ptr = new D();
	delete ptr;
	/*
	o/p
	Ctor of Base
	Ctor of Drived
	Dtor of Base

	its not deleting/calling dtor of drived class
	its only deleting base class
	As base is just a wrapper arround drived class
	it has to first delete the d class then b
	This can be acheived by virtual dtor
	add virtual keyword in based dtor 
	virtual ~B(){ cout<<"Dtor of Base"<<endl; }
	o/p
	Ctor of Base
	Ctor of Drived
	Dtor of Drived
	Dtor of Base

	hence memory leak is avoided, but increased
	the size of base class due to vptr->vtable
	*/

	return 0;
}