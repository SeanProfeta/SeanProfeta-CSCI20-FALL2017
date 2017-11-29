//created by: Sean Profeta
//Date Created:11/28/17
// This lab is simulate a shopping cart which we can add items too if the store runs out of stock it will not let you add the item.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string Items[10] = { "apples","strawberries","walnuts(lbs)", "organes", "peach", "steak" , "pepsi(2L)" , "can chicken" , "rice(lbs)" , "potatoes"};
    int inventory[10] = {10,30,4,10,10,8,15, 10,15,30};
    int price[10] = {1,1,5,1,1,20,2,4,2,1};
    int ordereditems[10];
    int totalitems=0;
    int itemsprice =0;
    
    for (int i=0; i<10; ++i){
        cout << "Enter how much " << Items[i] << " you would like : " << endl; 
        cin >> ordereditems[i];
        
        if((inventory[i]-ordereditems[i]) <=0){
            cout << "sorry we are short on inventory we are only able to add " << inventory[i] << endl;
            ordereditems[i] = inventory[i];
            }
            totalitems = totalitems +ordereditems[i];
            itemsprice = itemsprice + (ordereditems[i]* price[i]);
            inventory[i] = inventory[i] - ordereditems[i];
            cout << "you ordered " <<ordereditems[i] <<" of " << Items[i] << " which costed you $ " << ordereditems[i] * price[i]<< endl;
            cout << "your current total is $ " << itemsprice << endl;
        }
        cout << " you order " << totalitems << " total items for a amount of $" << itemsprice << endl; 
}