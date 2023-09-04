#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	int *d= new int{7};
	int e=8;
	vector <int>v {1,2,3,4,5};

	/*for_each(v.begin(), v.end(),
		[](int e){ cout<<"X: "<<e<<"\t"<<endl;
		// *d = 10;
		 e+=11;
	} );
	*/

	[](int x){
		x=10;
		cout<<x<<endl;
		}(e);
	return 0;
}