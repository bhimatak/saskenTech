#include <iostream>

using namespace std;

class smartPhone
{
private:
	int res;
	int size;
private:
	void manuVal(){ res -= 10; }
public:
	/*smartPhone(int x, int y){
		res = x;
		size = y;
	}*/
	/*smartPhone(){
		res = 0;
		size = 0;
	}


	smartPhone(smartPhone &obj)
	{
		res = obj.res;
		size = obj.size;
	}
	*/
	int getRes() {return res;}
	int getSize() { return size; }

	void setRes(int val){ 
		res = val;
		manuVal();

	}
	void setSize(int val){
		size = val;
	}

	void display ()const
	{
		// res -= 100;
		cout<<"res: "<<res<<endl;
		cout<<"size: "<<size<<endl;	
	}
};

int main()
{
	smartPhone Android1;

	Android1.setRes(200);
	// Android.manuVal();
	Android1.setSize(400);
	
	// Android.res = 200;
	// Android.size = 400;
	Android1.display();

	smartPhone Android2(Android1);

	Android2.display();
	Android2.setRes(301);
	Android2.display();
	Android1.display();


	return 0;
}