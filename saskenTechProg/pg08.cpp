// Pointer to the base class

#include <iostream>
using namespace std;

class B
{
	int x;
public:
	void setX(int val){ this->x = val; }
	int getX(){ return this->x; }

};

class D:public B
{
	int y;
public:
	void setY(int val){ this->y = val; }
	int getY(){ return this->y; }
	
};

int main()
{
	D *ptr=NULL;
	B b;
	ptr = &b; // will cause error invalid conversion
	/*
	ptr->setX(10);
	cout<<ptr->getX()<<endl;

	ptr->setY(11); // will give an error 
	*/			  // has no member named ‘setY’
	return 0;
}