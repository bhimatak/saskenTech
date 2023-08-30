#include <iostream>
using namespace std;

int sum(int, int);
double sum(int, int);

int main()
{
	cout<<"Sum: "<<sum(2,2)<<endl;
	cout<<"2Sum: "<<sum(4,5)<<endl;

	return 0;
}

int sum(int x, int y)
{
	return (x+y);
}

double sum(int x, int y)
{
	return (x+y);
}
