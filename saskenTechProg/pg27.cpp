#include <iostream>
using namespace std;
class SmartPtr {
	int* ptr; // Actual pointer
public:
	// Constructor
	explicit SmartPtr(int* p = NULL) { ptr = p; }
	// Destructor
	~SmartPtr() { cout<<"Dtor"<<endl; delete (ptr); }
	// Overloading dereferencing operator
	int& operator*() { return *ptr; }	
};
int main()
{
	SmartPtr ptr(new int());// = new SmartPtr();
	*ptr = 20;
	cout << *ptr;

	return 0;
}
