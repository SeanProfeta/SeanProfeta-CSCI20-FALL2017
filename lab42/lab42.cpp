//created by: Sean Profeta
//Date Created:11/28/17
// This lab is simulate a shopping cart which we can add items too if the store runs out of stock it will not let you add the item.
#include <iostream>
#include <string>
using namespace std;

int main(){
    //This is what sets the arrays and links them up as parreal arrays
    string Items[10] = { "apples","strawberries","walnuts(lbs)", "organes", "peach", "steak" , "pepsi(2L)" , "can chicken" , "rice(lbs)" , "potatoes"};
    int inventory[10] = {10,30,4,10,10,8,15, 10,15,30};
    int price[10] = {1,1,5,1,1,20,2,4,2,1};
    int ordereditems[10];
    int totalitems=0;
    int itemsprice =0;
    
    // this is the loop that will cycle througe all the items 
    for (int i=0; i<10; ++i){
        cout << "Enter how much " << Items[i] << " you would like : " << endl; 
        cin >> ordereditems[i];
        // THis will make it impossible for the user to take over the items the store has inventory of 
        if((inventory[i]-ordereditems[i]) <=0){
            cout << "sorry we are short on inventory we are only able to add " << inventory[i] << endl;
            ordereditems[i] = inventory[i];
            }
            //This is what figures out the total price of items as your adding them 
            totalitems = totalitems +ordereditems[i];
            itemsprice = itemsprice + (ordereditems[i]* price[i]);
            inventory[i] = inventory[i] - ordereditems[i];
            cout << "you ordered " <<ordereditems[i] <<" of " << Items[i] << " which costed you $ " << ordereditems[i] * price[i]<< endl;
            cout << "your current total is $ " << itemsprice << endl;
        }
        cout << " you order " << totalitems << " total items for a amount of $" << itemsprice << endl; 
}
/*
Enter how much apples you would like : 
4
you ordered 4 of apples which costed you $ 4
your current total is $ 4
Enter how much strawberries you would like : 
31
sorry we are short on inventory we are only able to add 30
you ordered 30 of strawberries which costed you $ 30
your current total is $ 34
Enter how much walnuts(lbs) you would like : 
2
you ordered 2 of walnuts(lbs) which costed you $ 10
your current total is $ 44
Enter how much organes you would like : 
4
you ordered 4 of organes which costed you $ 4
your current total is $ 48
Enter how much peach you would like : 
5
you ordered 5 of peach which costed you $ 5
your current total is $ 53
Enter how much steak you would like : 
3
you ordered 3 of steak which costed you $ 60
your current total is $ 113
Enter how much pepsi(2L) you would like : 
5
you ordered 5 of pepsi(2L) which costed you $ 10
your current total is $ 123
Enter how much can chicken you would like : 
25
sorry we are short on inventory we are only able to add 10
you ordered 10 of can chicken which costed you $ 40
your current total is $ 163
Enter how much rice(lbs) you would like : 
2
you ordered 2 of rice(lbs) which costed you $ 4
your current total is $ 167
Enter how much potatoes you would like : 
3
you ordered 3 of potatoes which costed you $ 3
your current total is $ 170
 you order 68 total items for a amount of $170

*/