#include <cstring>
#include <iostream>
using namespace std;

class String {
private:
	char* s;
	int size;

public:
	String(const char* str = NULL); // constructor
	// ~String() { delete[] s; } // destructor
	void print() { cout <<"\n"<< s << endl; }
	void change(const char*); // Function to change
};

String::String(const char* str)
{
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

// In this the pointer returns the CHAR ARRAY
// in the same sequence of string object but
// with an additional null pointer '\0'
void String::change(const char* str) { 
	
	strcpy(s, str); }

int main()
{
	String str1("Hello World");
	String str2 = str1;

	str1.print(); // what is printed ?
	str2.print();

	str2.change("Welcome to CPP Programming Class");

	str1.print(); // what is printed now ?
	str2.print();
	return 0;
}
