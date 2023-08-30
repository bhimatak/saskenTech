// unary_operator_overloading
#include <iostream>
using namespace std;

class check_count
 {
   public:
     int count_plus;
     int count_minus;

     check_count()
     {
       count_plus = 101;
       count_minus = 103;
     };
     void operator ++(int) { count_plus+=3; } // count increment
     void operator --() { count_minus-=3; } // count decrement
 };
int main()
 {
   check_count x, y; //creating objects

   //before increment/decrement
   cout << "x =" << x.count_plus<<"\n";
   cout <<"y =" << y.count_minus<<"\n";

   x++;
   --y;

   //after increment/decrement
   cout<<"\nAfter increment/decrement\n";
   cout<<"x ="<<x.count_plus<<"\n";
   cout<<"y ="<<y.count_minus<<"\n";
 return 0;
}