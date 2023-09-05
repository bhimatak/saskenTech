#include <iostream>
#include <string>
using namespace std;

class Marker
{
private:
    string Name;
    string Color;
    int year;
    int price;
    
public:
    Marker(){}
    Marker(string name, string color, int y, int p)
    {
        this->Name = name;
        this->Color = color;
        this->year = y;
        this->price = p;
    }
    int getPrice(){ return price;}
    int getYear(){ return year;}

};



class Invoice {
private:
    // Invoice 'has-a' Marker
    Marker *marker; 
    int quantity;
public:
    Invoice(Marker *m, int q){
        this->marker = m;
        this->quantity = q;
    }

    //to calculate/generate invoice
    int calculateTotal(){
        int price = marker->getPrice() * quantity;
        
        return price;

    }

};

class PrintInvoice{
     Invoice *iv;
public:
    PrintInvoice(Invoice *i){ 
        iv = i;
    }

    void printInvoice(){
        // print the invoice
    }
};

class SaveInvoice{
     Invoice *iv;
public:
    SaveInvoice(Invoice *i){ 
        iv = i;
    }

    void saveInvoicetoDB(){
        // save the invoice to db
    }
    
};











/*
    In the above example where we have the tested code of SaveInvoice to saves
    data to DB.
    Now if we change or add extented feature of saving the data to a file/NoSQL
    (MongoDB). then we are likely to get bugs for the current class.
    hence we can should make extensions in such a way that it does not have 
    any effect/impact the already test code.
    So better idea for this situation is to have an interface created for save 
    functionaly and add extensions as needed.

    follow the bellow code for the same.
    class SaveInvoice can be written as ABC now...
*/

















/*

class SaveInvoice{
public:
    virtual void save(Invoice iv)=0;
};

//save to  sql db
class saveDBInvoice : public SaveInvoice{
public:
    void save(Invoice iv){
        // Save to SQL DB
    }
};

//save to  flat file 
class saveFFInvoice : public SaveInvoice{
public:
    void save(Invoice iv){
        // Save to flat file
    }
};

//save to  NoSQL 
class saveNoSQLInvoice : public SaveInvoice{
public:
    void save(Invoice iv){
        // Save to MongoDB
    }
};

*/