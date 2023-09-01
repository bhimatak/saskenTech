#include <iostream>

using namespace std;

namespace Integer{
	int var=10;
}
namespace Double{
double var=20.3;
}

using namespace Integer;
using namespace Double;

int main()
{
	cout<<var<<endl;
	cout<<Double::var<<endl;

	return 0;
}