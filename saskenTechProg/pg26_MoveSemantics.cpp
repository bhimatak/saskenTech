#include <iostream>
#include <vector>

using namespace std;

class A{

    int *ptr;
    public:
        A(){ cout<<"Default Ctor"<<endl;
            ptr = nullptr;
        }
        A(const A& a)
        {
            cout<<"Copied"<<endl;
            ptr = new int;
            *ptr = 101;
            
        }
        A(A&&a) noexcept{
            cout<<"Moved"<<endl;
            // ptr = new int();

            ptr = a.ptr;
            // *a.ptr = 101;
            // *ptr = 201;

        }
        ~A(){
            cout<<"Dtor"<<endl;
            cout<<"Address: "<<ptr<<endl;
            delete ptr;
        }
        void setA(int val){*ptr=val;}
        int getA() {return *ptr;}

};

int main()
{
    vector<A> v;
    A a1;

    // v.push_back(a1);
    v.push_back(move(a1));

    return 0; 
}