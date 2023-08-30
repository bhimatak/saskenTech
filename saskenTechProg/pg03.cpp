#include <iostream>

using namespace std;

class Test
{
	int x;
public:
	Test(int val){ this->x = val; }
	int getX() { return x; }

};

int main()
{
	/* if there is only one argument
	 to be passed to the construtor then
	 we can pass it using the following method
	 as well.
	 

	*/
	Test t1=100;
	Test t2(101);
	cout<<t1.getX()<<endl;
	cout<<t2.getX()<<endl;
	
	return 0;

}