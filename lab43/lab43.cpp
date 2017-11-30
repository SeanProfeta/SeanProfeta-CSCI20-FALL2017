//created by: Sean Profeta
// date created : 11/29/17
// The purpose of this lab is to simulate a shopping cart and will have items have an inventory the program will not go under.

#include <iostream>
#include <string>
using namespace std;
//This is class where variables and function will be sorted 
class Supplements {
    private :
    string supps;
    int inventory;
    double price;
    public:
    Supplements();
    Supplements(string item, int inv,double price);
    void print();
    void setitem(string item);
    void setinventory(int num);
    void setprice( double price);
    string getitem();
    int getinentory();
    double getprice();
};
//This is the section where the constructor is made 
Supplements::Supplements(){
    supps= "bbca";
    inventory = 0;
    price = 1.00;
}

Supplements::Supplements(string name,int inv, double price){
    supps = name;
    inv = inventory;
    price = price;
}

void Supplements::print(){
    cout << supps << "    $"<< price << " stock" << inventory << endl;
}

void Supplements::setitem(string item){
    supps = item;
}

void Supplements:: setinventory(int num){
    inventory=num;
}

void Supplements:: setprice(double price){
    price= price;
}

string Supplements::getitem(){
    return supps;
}

int Supplements::getinentory(){
    return inventory;
}

double Supplements::getprice(){
    return price;
}

int main(){
    const int objarray =10;
    char shopping = 'y';
    double total= 0.0;
    int cart = 0;
    int cartInv = 0;
   
    Supplements suppsShop[objarray]{
        Supplements("Gold Standard protein   ",5,57.99),
        Supplements("syntha-6 labs   ", 10,44.99),
        Supplements("pro Jym  ", 6,56.98),
        Supplements("nitro-Tech ",10,56.99),
        Supplements("protein cookie ",25,11.99),
        Supplements("ISO100 ",7 , 74.99),
        Supplements("cake Bites " , 20 ,19.99),
        Supplements("combat crunch bar ", 10,24.99),
        Supplements("Gold standard Casein ", 12,32.88),
        Supplements("syntha-6 protein crisp ", 10, 19.99)
    };
        
    
}