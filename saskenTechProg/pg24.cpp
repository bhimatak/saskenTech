#include <iostream>

using namespace std;

void PrintInt(int &x)
{
	cout<<x<<endl;
}

/*
void PrintInt(const int &x)
{
	cout<<x<<endl;
}
*/

void PrintInt(int &&x)
{
	cout<<x<<endl;
}

int main()
{
	int a=10;
	PrintInt(a);
	PrintInt(11);
}