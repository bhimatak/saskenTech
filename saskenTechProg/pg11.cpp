#include <iostream>

using namespace std;

class Animal //ABC
{
public:
	virtual void eat(int) = 0;
	virtual void walk()=0;
};

class cow: public Animal
{
public:
	cow(){ cout<<"Cow "<<endl;}
	void eat(int x){cout<<" eats veg"<<endl;
	cout<<"x "<<x<<endl; }
};

class cat: public Animal
{
public:
	cat(){ cout<<"Cat ";}
	void eat(int x=0){cout<<" eats Nonveg"<<endl;
	cout<<"x "<<x<<endl;}
};


int main()
{
	cow c1;
	cat c2;

	c1.eat(10);
	c2.eat();

	return 0;
}