#include <iostream>

using namespace std;

class test
{
	int id;
public:
	int i;
	test(int val){ 
		cout<<"Construct ID: "<<val<<endl;
		this->id = val; 
	}
	~test(){ 
		cout<<"Destructor ID: "<<this->id<<endl;
	}
	//obj pass by ref// try without &
	void nagate(test &obj)
	{
		// this->i = -obj.i;
		obj.i = -obj.i;
	}
	int getVal(){ return this->i; }

};

int main()
{
	test o(1);
	o.i = 10;
	o.nagate(o);
	cout<<o.getVal()<<endl;
	return 0;
}