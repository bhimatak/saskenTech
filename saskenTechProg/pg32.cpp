#include<iostream>

using namespace std;

template<typename T>
bool pair_comparer(T a, T b) {
  // In real-world code, we wouldn't compare floating point values like
  // this. It would make sense to specialize this function for floating
  // point types to use approximate comparison.
  return a == b;
}

template<typename T, typename... Args>
bool pair_comparer(T a, T b, Args... args) {
  return a == b && pair_comparer(args...);
}

int main()
{
    int a[5] = {1,2,3,3,3};

    for(int i=0;i<5;i++)
        cout<<pair_comparer(a[i],a[i+1])<<endl;
}