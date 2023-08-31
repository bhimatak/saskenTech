#include <iostream>

 

class Animal {

    double weight;

public:

    Animal() {  }

    Animal(double w) : weight(w) {

        std::cout << "Animal ctor\n";

    }

    void disp() {

        std::cout << "weight: " << weight << std::endl;

    }

};

 

class Donkey : virtual public Animal {

public:

    Donkey() { std::cout << "Default Donkey ctor \n"; }

    // Donkey(double w) : Animal(w) {

    //     std::cout << "Donkey ctor\n";

    // }

};

 

class Horse : virtual public Animal {

public:

    Horse() {}

    // Horse(double w) {


    //     std::cout << "Horse ctor\n";

    // }

};

 

class Mule : public Horse, public Donkey {

public:

    Mule(double w) : Animal(w) {

        std::cout << "Mule ctor\n";

    }

};

 

int main()

{

    Mule big_fat_Mule(199);

    big_fat_Mule.disp();

    return 0;

}