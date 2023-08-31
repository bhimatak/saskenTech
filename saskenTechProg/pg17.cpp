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

};

int main()
{
	Height h1(5,10),h2(5,1);
	
}