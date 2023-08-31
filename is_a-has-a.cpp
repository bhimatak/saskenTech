/*

1. has-a relationship -> Composition is "has-a" relationship
2. is-a relationship -> Inheritance is "is-a" relationship

types of composition-> a. itself called composition b. Agreegation

ex:
class : vechicle, car, tyre

*/
#include <iostream>
using namespace std;

class Tyre{};
class Engine{};

//composing the components (i.e eng and tyre are parts of vechile) of vechicle
// thatz why below is "has-a" relationship (i.e vechicle has a engine and tyre
// as part of its own
class Vechile{
	Engine e;
	Tyre t;
};


// every car "is-a" vechile thatz why inheritance
class Car: public Vechile
{
	
};

 