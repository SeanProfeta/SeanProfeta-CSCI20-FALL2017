//Made by Sean Profeta & Alex Ortega 
//date created 12/4/17-12/10/17
/*
This program will function as a Pizzaria called peace of Pizza. The program will have have  to pull lines from a script as the user enters what they want from the shop. 
The program will loop untill the user completes their order and then it will print out a receipt with a price and a recap of their order 
*/
#include<iostream>//correct includes
#include<fstream>// allows for file  streaming use
#include<string>
using namespace std;

    class Cart {// Class called Cart declared
        public://public for our Functions
        Cart();
        Cart(string item,int num,double price);
        void Print();
        void SetName(string name);
        void SetInventory(int num);
        void SetPrice(double price);
        string GetName();
        int GetInventory();
        double GetPrice();
    private:// private for our variables
        string products_;
        int inventory_;
        double price_;
        };
    
    Cart::Cart(){
        products_= "pizzas";
        inventory_=0;
        price_ = 1.00;
    }
    Cart::Cart(string item,int num, double price){
        products_ = item;
        inventory_ =num;
        price_ = price;
    }
    
    
    
    void Cart::Print(){//Print function for ur menue
        cout << products_ << "     $" << price_ << "     In stock:" << inventory_ << endl;
    }
    void Cart::SetName( string name){// function for setting the prouct name 
        products_=name;
    }
    void Cart::SetInventory (int num){ //setting the amount of a product for inventory 
        inventory_ = num;
    }
    
    void Cart::SetPrice( double price){// setting the price per product
        price_= price;
    } 
    
    string Cart::GetName(){//Function to return product name 
        return products_;
    }
    
    int Cart::GetInventory(){// function to return how many of each product are in stock
        return inventory_;
    }
    double Cart:: GetPrice(){// function to return the price per unit
        return price_;
    }


int main(){
    ifstream inFile;//enables file input
    ofstream outFile;//enables file output
    outFile.open("receipt.txt");//tells program to send text to this file
 const int Num_array=15;// initilization of all our variables
 char done = 'y';
 double total =0.00;
 int cart_in =0;
 int cart_num =0;
 string userName; 
  
 //file 1
    inFile.open("script1.txt");//opening our first script file for opening statements
    if(inFile.fail()){
      cerr << "Error opening file" << endl; // cerr is something i found on youtube works like cout but is meant for errors 
      exit(1);
  }
      string s;
      while (getline(inFile,s)){
          cout<<s<<endl;
      }
      inFile.close();
      //file 2
    inFile.open("script2.txt");//opening our second script file for second step of scrpit explaining everything is menue price
    if(inFile.fail()){
      cerr << "Error opening file" << endl;// lets us know if there was an error opening this file, same as above
      exit(1);
  }
  string t;
  while (getline(inFile,t)){
      cout <<t <<endl;
  }
    inFile.close();
  
  Cart cart[Num_array * 15];
  
  Cart Shop[Num_array] = {// declaring our menue array
      Cart("Texas roadhouse",         15,24.99),//products
      Cart("BBQ Blaster",             15,24.99),
      Cart("Pep Lover",               15,15.99),
      Cart("Hawaian ",                15,15.99),
      Cart("Wild Wild West",          15,24.99),
      Cart("Vegitarian" ,             15,24.99),
      Cart("Buffalo Bill",            15,20.99),
      Cart("Cali Style Chicken",      15,21.99),
      Cart("Cheese Lovers",           15,18.99),
      Cart("Combination",             15,19.99),
      Cart("Wings(15)",               15,15.99),
      Cart("Breadstick(5)",           15,4.99),
      Cart("Ultimate Choclate Cookie",15,6.99),
      Cart("Lava cakes(2)",           15,3.99),
      Cart("Chicken Ceasar Salad",    15,6.99)
  };
  
  while (done == 'y'){// loop to determine if a user is finished shopping
      for (int i =0; i<Num_array;i++){
          cout << i+1 << "->";
          Shop[i].Print();// will print the users list
    }
      
      cout << " " << endl;
      cout<<"Please select the number code for the item you would like to  purchase:" << endl;
      cin >> cart_in;// accepts user input for item desired
      if(Shop[cart_in-1].GetInventory() <=0){
          cout << "I'm sorry we are  currently out of that kind of pizza."<<endl;// will notify user if stock is 0
          cin >> cart_in;//accepts user input for a different item
    }
  
  Shop[cart_in-1].SetInventory(Shop[cart_in-1].GetInventory()-1);
  total=total + Shop[cart_in-1].GetPrice();
  cart[cart_num]= Shop[cart_in-1];
// file 3
inFile.open("script3.txt");// opens the file for third part of the script
    if(inFile.fail()){// if opening th file fails
      cerr << "Error opening file" << endl;// an error message will output
      exit(1);
  }
  string y;
  while (getline(inFile,y)){
      cout <<y << endl;
  }
  inFile.close();
cin >> done;
if( done =='y'){// determines if user is done adding to their order
    cart_num++;
  }
  }
cout << "Can I get a name for the order please:" << endl;// prompts user for inputed name for recipt
cin >> userName;// accepts name for user's recipt
outFile << "Thank you for choosing Peice of Pizza, "<<userName<<  " we'll have that ready in 20!" << endl;// all ouput from here down prints to the recipt file
for (int i=0;i<=cart_num;i++){
outFile << cart[i].GetName() <<"   " << cart[i].GetPrice()<<endl;// gets name and price for items

  }
  
outFile<< "Total: $ "<<total<<endl;// outputs total cots
cout << "*Receipt printed and handed to customer" << endl;
cout << "*Customer looks at receipt (the file)";
return 0;
inFile.close();//closing our file
outFile.close();
}