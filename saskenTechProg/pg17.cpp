#include <iostream>

using namespace std;

class Height
{
	int feet;
	int inch;
public:
	Height(){}
	Height(int v1, int v2)
	{
		this->feet = v1;
		this->inch = v2;
	}
	int getFeet(){return this->feet;}
	int getInch(){return this->inch;}

};

template <class T>
void calHeight(T ob1, T ob2)
{
	int feet = ob1.getFeet()+ob2.getFeet();
	int inch = ob1.getInch()+ob2.getInch();

	if(inch>=12){
		feet++;
		inch -= 12;
	}

	cout<<"Height: "<<feet<<"'."<<inch<<"\""<<endl;
}

int main()
{
	Height h1(5,10),h2(5,1);
	calHeight<Height>(h1,h2);

	return 0;
}