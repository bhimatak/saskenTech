#include <iostream>

using namespace std;

class smartPhone
{
protected:
	int res;
	int size;
public:
	void setValues(int,int);
	void display();
};

void smartPhone::setValues(int res, int size)
{
	this->res = res;
	this->size = size;
}

void smartPhone::display()
{
	cout<<"Res: "<<this->res<<endl;
	cout<<"Size:"<<this->size<<endl;
}

// class childClass: scope/visiblity mode baseClass

class Andriod:pro martPhone
{
public:
	void disp();
};

void Andriod::disp()
{
	cout<<"\nIts an Andriod Phone"<<endl;
	// cout<<"\nRes : "<<res<<endl;
}

class Samsung: public Andriod
{
public:
	void dispSumsung()
	{
		cout<<"\nIts an Samsung Andriod Phone"<<endl;
		cout<<"\nRes : "<<res<<endl;
	}
};

int main()
{
	// smartPhone s1;
	// s1.setValues(100,200);
	// s1.display();
	/*
	Andriod a1;

	a1.disp();
	a1.setValues(101,201);
	a1.display();
*/

	Samsung sam1;
	sam1.dispSumsung();
	sam1.display();


	cout<<"\n\n";
	return 0;
}