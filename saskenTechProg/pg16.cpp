// use of templates

#include <iostream>

using namespace std;

template <class T1, class T2>
void f(T1 x, T2 y){
	cout<<"x: "<<x<<"\t"<<y<<endl;
}

int main()
{

	f<double, float>(10.1,20.1);
	return 0;

}