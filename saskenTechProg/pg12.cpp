#include <iostream>
#include <exception>
#include <stdexcept> //to handle runtime errors

using namespace std;

int main()
{
	int a=10, b=6;
	int errno1=101;
	int *ptr=NULL;

	try{
		if(b==0){
			throw "Test";
		}
		else if(b==2)
			throw errno1;
		else if(b==3)
			throw "Hello";
		else{
			if(b==6)
				throw runtime_error("Math error: Attempted to divide by Zero\n");
			cout<<a/0<<endl;
			// ptr = new int[99999999999];
			// throw exception();

		}

	}
	catch(int ch)
	{
		cout<<ch<<endl;
	}
	catch(const char *e)
	{
		cout<<e<<endl;
	}
	
	catch (runtime_error& e) {
  
        // prints that exception has occurred
        // calls the what function
        // using runtime_error object
        cout << "Exception occurred" << endl
             << e.what();
    }
    catch(const exception& ex){
		cout<<"Error: "<<ex.what()<<endl;
	}
	catch(...)
	{
		cout<<"Any Exceptions"<<endl;
	}

	return 0;
}