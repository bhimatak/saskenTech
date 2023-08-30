// Pointer to the base class

#include <iostream>
using namespace std;

class B
{
	// int x;
public:
	virtual void display() { cout<<"Hello Base"<<endl; }
	// void setX(int val){ this->x = val; }
	// int getX(){ return this->x; }
	virtual void p(){ cout<<"h";}

};

class D:public B
{
	// int y;
public:
	void display() { cout<<"Hello Drived"<<endl; }
	
	// void setY(int val){ this->y = val; }
	// int getY(){ return this->y; }
	
};

int main()
{
	
	/*
	B *ptr = new D();
	// D d;
	// ptr = &d;

	ptr->setX(10);
	cout<<ptr->getX()<<endl;
	ptr->display();


	// ptr->setY(11); // will give an error 
				  // has no member named ‘setY’
	*/
		  /*
	D *ptr = NULL;
	B b;
	ptr =(D *)&b;
	*/
	cout<<"B Size: "<<sizeof(B)<<endl;
	cout<<"D Size: "<<sizeof(D)<<endl;
	return 0;
}