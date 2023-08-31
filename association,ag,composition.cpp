


// Association is a super set of agreegation and composition
// Agreegation is a super set of composition 
// composition is composing the components in it.





//1. Association is have-a relationship with
// Accounts have-a relationship with Employee

class Accounts{
public:
	// e is passed to calcSal as a copy of the Employee
	// and hence calcSal uses Employee class (pass by value)
	// and therefore life-cycle of 'e' is not controled by Accounts 
	float calcSal(Employee e,AMS a){}
};









//2. Agreegation -> have an object which is borrowed from someone else
// thatz y when class dies the borrowed obj may live on
// Admin borrows Employee object as a reference.
// hence if Admin obj dies, Employee obj 'e' may live on
// Agreegation does not controll the life-span of borrowed obj.

class Admin{
public:
	// changing the original content as we are passing it as a ref.
	
	void reactivateAccessCard(Employee &e)
	{
		e.statusAccessCard = True;
	}
};	

//ex2:
class Person{
	private:
		string Name;
		int Age;
		char Gender;
		bool Status; // this flag is used to find if person is in committed or not
		string partnerName; 
};

class Couple{
	public:
		void MakeCouple(Person &p1, Person &p2)
		{
			p1.Status = True;
			p2.Status = True;
			p1.partnerName = p2.Name;
			p2.partnerName = p1.Name;
		}
		
};

// in the above class couple after object of couple made a relationship
// it may end up as the job is done. but the person object life still remains
// with the changed values.




//3.Composition -> own the object for its lifetime
class Tyre{};
class Engine{};

class Vechile{
private:
	// Engine and Tyre are part of Vechile.
	// if the obj of Vechile dies, objects of Engine and Tyre objects also dies 
	Engine *e = new Engine();
	Tyre *t = new Tyre();
};