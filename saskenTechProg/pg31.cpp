#include<iostream>

using namespace std;
//recursive call -> this is the last call
void fun()
{
    cout<<"Hello"<<endl;
}

template <typename T1,typename... T2>
void fun(T1 v, T2... types)
{
    cout<<"Function: "<<v<<endl;
    fun(types...);
}


int main()
{
    fun(1,2,3.2,"MyName");

    return 0;
}

/*
int main()
{
    int arr[] = {2,4,4,5,5,6};
    for(i=0;i<size;i++)
        cout<<compare_pairs(a[i],a[i+1])<<endl;;
}

0
1
0
1
0
*/