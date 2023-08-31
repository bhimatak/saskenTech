#include <iostream>

using namespace std;

class Employee{
	int _id;
	string name;
	float sal;
public:
	Employee(int val1, string n, float s)
	{
		this->name = n;
		this->sal =s;
		this->_id = val1;
	}
	void disp(){
		cout<<"\nEmployee Details\n"<<endl;
		cout<<this->name<<"\t"<<this->_id<<"\t"<<this->sal<<endl;
	}
	friend float calcBonusEmp(Employee &);
};


float calcBonusEmp(Employee &e)
{
	float inc=10;
	float bonus = e.sal+(e.sal*inc);
	return bonus;

}

int main()
{
	Employee e(101,"Bhima",10001.1);
	e.disp();
	cout<<calcBonusEmp(e);

	return 0;
}