#include <iostream>
#include <stdlib.h>

using namespace std;

class Toy{
protected:
	string name;
	float price;
public:
	virtual void prepareParts() = 0;
	virtual void combineParts() = 0;
	virtual void assembleParts() = 0;
	virtual void applyLable() = 0;
	virtual void showProduct() = 0;
};

class Car: public Toy
{
public:
	void prepareParts(){ cout<<"Preparing Car Parts"<<endl;	}
	void combineParts(){ cout<<"combining Car Parts"<<endl;	}
	void assembleParts(){ cout<<"Assembling Car Parts"<<endl;	}
	void applyLable(){ cout<<"Applying Car Label"<<endl;
		name = "Car"; price = 200.50;
	}
	void showProduct(){ cout<<"Details of Car\n"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<price<<endl;	
	}
	
};

class Bike: public Toy
{
public:
	void prepareParts(){ cout<<"Preparing Bike Parts"<<endl;	}
	void combineParts(){ cout<<"combining Bike Parts"<<endl;	}
	void assembleParts(){ cout<<"Assembling Bike Parts"<<endl;	}
	void applyLable(){ cout<<"Applying Bike Label"<<endl;
		name = "Bike"; price = 150.50;
	}
	void showProduct(){ cout<<"Details of Bike\n"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<price<<endl;	
	}
	
};

class Plane: public Toy
{
public:
	void prepareParts(){ cout<<"Preparing Plane Parts"<<endl;	}
	void combineParts(){ cout<<"combining Plane Parts"<<endl;	}
	void assembleParts(){ cout<<"Assembling Plane Parts"<<endl;	}
	void applyLable(){ cout<<"Applying Plane Label"<<endl;
		name = "Plane"; price = 505.50;
	}
	void showProduct(){ cout<<"Details of Plane\n"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<price<<endl;	
	}
	
};


class ToyFactory
{
public:
	static Toy *createToy(int type)
	{
		Toy *toy = nullptr;

		switch(type)
		{
			case 1:
					// Creating Car Type
					toy = new Car();
					break;
			case 2:
					// Creating Bike Type
					toy = new Bike();
					break;
			case 3:
					// Creating Plane Type
					toy = new Plane();
					break;
			default:
					cout<<"Wrong Type selected"<<endl;
					return nullptr;


		}
	

	toy->prepareParts();
	toy->combineParts();
	toy->assembleParts();
	toy->applyLable();

	return toy;
	}
};


int main()
{
	int type;
	while(1)
		{
			cout<<"Type the type number or 0 to exit: ";
			cin>>type;
			if(type<=0)
				break;
			Toy *toy = ToyFactory::createToy(type);
			if(toy){
				toy->showProduct();
				delete toy;
			}

		}
		cout<<"\n\nExiting......."<<endl;
	return 0;
}
