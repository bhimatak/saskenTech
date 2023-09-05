#include<iostream>
#include<string>
using namespace std;

//defining the rules/intrfaces of the Employee working in the resturant
class RestroEmp{
public:
    virtual void washDishes()=0;
    virtual void takeServices()=0;
    virtual void cookFood()=0;
};

class Waiter: public RestroEmp
{
public:
    void washDishes(){
        // unnecessary/not required method for waiter
        // but still it is implemented due to ABC which has set the guidelines
        // of the resturant employee in general
        // hence should be avoided
    }

    void takeService(){
        cout<<"Waiter takes the service order"<<endl;
    }

    void cookFood(){
        //again unnecessary for the waiter derived class
    } 
};

/*
    if we are now having some discrete/smaller interfaces then it can be better
*/

// definig the rules for waiter interface
class WaiterInterface{
public:
    virtual void takeOrder()=0;
    virtual void serveCustomer()=0; 
};

class ChefInterface{
public:
    virtual void cookFood()=0;
    virtual void prepareMenu()=0;
};

class Waiter : public WaiterInterface
{
public:
    void takeOrder(){
        //implement take order method
    }
    void serveCustomer(){
        //implements to server cutomer method
    }
};

class Chef : public ChefInterface
{
public:
    void cookFood(){
        //implement cook food method
    }
    void prepareMenu(){
        //implements to prepare menu method
    }
};

//now if chef wants to extend the duty as waiter-> needs to extend as waiterinterface
// leading to extra duty apart from the regular