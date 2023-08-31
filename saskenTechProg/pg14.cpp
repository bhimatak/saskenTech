//overloading of insertion op

#include <iostream>

using namespace std;

class Test1
{
private:
	string s1;
	string s2;
public:
	Test1(string v1, string v2) { this->s1 = v1; this->s2=v2;}
	void disp(){ cout<<s1<<"\t"<<s2<<endl;}

	friend ostream& operator<<(ostream&op, Test1&); 
};

class Test2
{
	int s1;
	int s2;
	string s3;
public:
	Test2(int v1, int v2, string v3)
	{
		this->s1 = v1;
		this->s2 = v2;
		this->s3 = v3;
	}

	friend ostream& operator<<(ostream&op, Test2&);
};

ostream& operator<<(ostream&op, Test1&obj)
{	
	op<<obj.s1<<"\t"<<obj.s2<<endl;
	return op;
}

ostream& operator<<(ostream&op, Test2&obj)
{	
	op<<obj.s1<<"\t"<<obj.s2<<endl;
	op<<obj.s3<<endl;
	return op;
}


int main()
{
	Test1 t1("bhima","shankar");
	Test2 t2(10,20,"Hello");
	// t.disp();
	cout<<t1;
	cout<<t2;
	return 0;
}