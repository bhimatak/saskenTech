#include<iostream>
#include <string>
#include <cstring>
using namespace std;

class stClass
{
 private:
  string name;
 public:
  void getvalue()
  {
   cout<<"Enter the name:";
   cin>>name;
   
  }
  stClass operator+(const stClass obj)
  {
   stClass temp;
   temp.name = this->name;//c1
   temp.name += "_";
   temp.name += obj.name;//c2
   
   return(temp);
  }
  void display()
  {
   cout<<name<<"\n";
  }
};

int main()
{
  stClass c1,c2,c3,c4;
  int x=10,y=20,z;

  c1.getvalue();
  c2.getvalue();

  c3 = c1+c2;
  

  cout<<"Result is:\n";
  c3.display();

  z=x+y;
  cout<<"Z: "<<z<<endl;
  
  
 return 0;
}