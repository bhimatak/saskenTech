#include <iostream>

using namespace std;

class smartPhone
{
public:
	void takeSelfie();
	void makeCall();
};

void smartPhone::takeSelfie()
{
	cout<<"Selfie Taken from: ";
}

void smartPhone::makeCall()
{
	cout<<"Making call from: ";
}

class Android: public smartPhone
{
public:
	void display(){ cout<<" Android"<<endl; }
};

class IPhone: public smartPhone
{
public:
	void display(){ cout<<" IPhone"<<endl; }
};

int main()
{
	Android a;
	IPhone i;
	
	a.takeSelfie();
	a.display();
	a.makeCall();
	a.display();

	i.takeSelfie();
	i.display();
	i.makeCall();
	i.display();
	
	return 0;
}