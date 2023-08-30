#include <iostream>

using namespace std;

class test
{
  int s;
public:
  test(){this->s=0; }

  test(int val){ this->s = val; }
  void display(){ cout<<this->s<<endl; }
};

int main()
{
  test t1[10]={1,2,3,4,5,6,7,8,9,10};
  test t2[10];
  for(int i=0;i<10;i++)
    t1[i].display();
  for(int i=0;i<10;i++)
    t2[i].display();
}