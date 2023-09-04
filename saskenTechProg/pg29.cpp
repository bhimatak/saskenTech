#include <iostream>
#include <thread>

using namespace std;

typedef unsigned long long ULL;

void printOdd(ULL limit)
{
	for(ULL i=0;i<limit;i++)
	{
		if(i%2 != 0)
			cout<<i<<endl;
	}
}

void printEven(ULL limit)
{
	for(ULL i=0;i<limit;i++)
	{
		if(i%2 == 0)
			cout<<i<<endl;
	}
}

int main()
{
	ULL limit=190000;
	// printEven(limit);
	// printOdd(limit);

	thread t1(printEven, limit);
	thread t2(printOdd, limit);

	t2.join();
	t1.join();

	return 0;
}

