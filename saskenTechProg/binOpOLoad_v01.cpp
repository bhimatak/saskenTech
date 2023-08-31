#include<iostream>
#include <string>
#include <cstring>
using namespace std;

class stClass
{
 private:
  int x;
 public:
  stClass(int val){ this->x = val; }
  
  int operator<<(const stClass obj)
  {
   int temp;
   temp = this->x >> obj.x;
   
   return(temp);
  }

};

int main()
{
  stClass c1(2),c2(1);
  int z;

  
  z = c1<<c2;
  

  
  cout<<"Z: "<<z<<endl;

  
 return 0;
}