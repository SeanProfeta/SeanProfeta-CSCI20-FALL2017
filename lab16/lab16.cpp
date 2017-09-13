//Created by :Sean Profeta
//Date : 9/13/17

#include <iostream>
#include <string> 
using namespace std;
//This is where you enter your stock and put all the variables you will need
struct stockpro {
    string stockname;
    char sector;
    double stockprice;
    int stockowned; 
};
//this is why first object 
main(){
stockpro stock1;
cout<< "stock name:";
cin >> stock1.stockname;
cout << "sector:";
cin >> stock1.sector;
cout <<"stockPrice:";
cin>>stock1.stockprice;
cout << "stockown:";
cin>> stock1.stockowned;
cout << "stock worth $"<<stock1.stockprice * stock1.stockowned << endl;

//this is the second object
stockpro stock2;
cout<< "stock name:";
cin >> stock2.stockname;
cout << "sector:";
cin >> stock2.sector;
cout <<"stockPrice:";
cin>>stock2.stockprice;
cout << "stockown:";
cin>> stock2.stockowned;
cout <<"stock worth $"<< stock2.stockprice * stock2.stockowned<<endl;;

//This is the third object
stockpro stock3;
cout<< "stock name:";
cin >> stock3.stockname;
cout << "sector:";
cin >> stock3.sector;
cout <<"stockPrice:";
cin>>stock3.stockprice;
cout << "stockown:";
cin>> stock3.stockowned;
cout <<"stock worth $"<<stock3.stockprice * stock3.stockowned<<endl;;


//This is the fourth object
stockpro stock4;
cout<< "stock name:";
cin >> stock4.stockname;
cout << "sector:";
cin >> stock4.sector;
cout <<"stockPrice:";
cin>>stock4.stockprice;
cout << "stockown:";
cin>> stock4.stockowned;
cout << "stock worth $"<<stock4.stockprice * stock4.stockowned<<endl;


/*stock name:FordM
sector:A
stockPrice:18.76
stockown:87
stock worth $1632.12
stock name:Alberstsn
sector:C   
stockPrice:34.39
stockown:542
stock worth $18639.4
stock name:AALP
sector:T
stockPrice:145.91
stockown:5
stock worth $729.55
stock name:WFC     
sector:F
stockPrice:53.02
stockown:1368
stock worth $72531*/

}; 

