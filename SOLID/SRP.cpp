#include <iostream>
#include <string>
using namespace std;
/*
class Marker
{
private:
    string Name;
    string Color;
    int year;
    int price;
    int quantity;

public:
    Marker(string name, string color, int y, int p, int q)
    {
        this->Name = name;
        this->Color = color;
        this->year = y;
        this->price = p;
        this->quantity = q;
    }

    //to calculate/generate invoice
    int calculateTotal(){
        int price = price*quantity;
        return price;

    }

    void printInvoice(){
        // print the invoice
    }

    void saveToDB(){
        // save the data to the DB/file system
    }

};


*/

/*
Now think of maintaince of this class.
this is having some design constriants like
if i change in calculation of total like adding
GST/TAX/discount on no of quantity
the print will change and hence the save to db would require
changes

hence multiple changes are effected
for SRP -> a class should do one thing and therefore it should have only 
a single reason to change
*/ 
/*

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

    void printInvoice(){
        // print the invoice
    }

    void saveToDB(){
        // save the data to the DB/file system
    }

};

*/

/*

so now find any reasons if certain thing changes will effect the class
1. if we apply GST/Tax/make discount on quantity will lead to changes
    in the calculate method and hence to the class Invoice
2. if we change any logic for the printInvoice would make changes to the class Invoice
3. if we make changes in savetoDB like save to to flat file/NoSQL/SQL(DB) will lead 
    to the changes in the method as well in class Invoice

    Hence there are 3 reasons -> hence class Invoice is not following SRP rule

    following dec.. of the Invoice class will help with SRP
*/



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
    void saveInvoicetoFile(){
        // save the invoice to file
    }
};


// Now each class have individual responsibility
//easy to maintain, read,...

int main()
{
    return 0;
}