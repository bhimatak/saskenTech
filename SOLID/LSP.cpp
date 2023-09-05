#include <iostream>
#include <string>
using namespace std;

class Bike
{
public:
    virtual void turnOnEngine() = 0;
    virtual void accelarate() = 0;
};

class MotorCycle: public Bike
{
    bool isEngineOn;
    int speed;
public:
    MotorCycle() {isEngineOn = false; speed = 0;}
    void turnOnEngine() {
        // Turn on the Engine
        isEngineOn = true;
        cout<<"Engine is turned on"<<endl;
    }
    void accelarate(){
        //speeding up the motorcycle
        speed += 10;
        cout<<"Speed: "<<speed<<endl;
    }

};


class BiCycle: public Bike
{
    int speed;
public:
    BiCycle() {speed = 0;}
    void turnOnEngine() {
        // Turn on the Engine
        // isEngineOn = true;
        cout<<"throw an error: BiCycle does not have an Engine"<<endl;
    }
    void accelarate(){
        //speeding up the motorcycle
        speed += 10;
        cout<<"Speed: "<<speed<<endl;
    }

};

int main()
{
    Bike *b;
    MotorCycle m;
    BiCycle bi;
    b = &m;
    b->turnOnEngine();
    b->accelarate();
    /*
        Now instead of MortorCycle object if the ABC is asssigned to
        BiCycle object then it leads to error as it not having engine
    */
   b = &bi;
   b->turnOnEngine();
   //need to write the code if the engine is on then only accelarate
   b->accelarate();
    // Hence the ABC is narrow downing the fuctionality on the drived class
    // of Bicycle to not to have the turnOnEngine feature/method
    // instead it should have some other extensions on the derived class 
    // like: Bike can be extended to Electric Bike having additional
    // features apart from turnOnEngine and accelerate
    return 0;
}