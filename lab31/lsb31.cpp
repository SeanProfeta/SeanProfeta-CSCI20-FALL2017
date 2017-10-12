#include <iostream> 
#include <string>
#include <stdio.h>
using namespace std;
int main(){
    // the intal declaration of the variables 
    int smart_Phones = 0;
    int dumb_Phones = 0;
    int tablet = 0;
    int data_Amount =0;
    //the program getting the information to figure out the best plan 
    cout << "enter number of phones" << endl << " smart phones "<< endl;
    cin>> smart_Phones;
    cout << "dumb phones" << endl;
    cin >> dumb_Phones ;
    cout << "tablets"<< endl;
    cin >> tablet;
    // i made unlimited 99 becuse i could not make it accept unlimited 
    cout << "enter how many gb of data you want 1,2,3,6,8,10,16,25, or unlimited(99)" << endl;
    cin >> data_Amount;
    //This portion is the if statments finding out the best plan for the customer with the given information 
    if ( data_Amount== 2){
        int totalphones = smart_Phones + dumb_Phones;
        int price = totalphones * 40;
        cout << "the best plan for you would be the sprint 2gb plan. it would cost you " << price << " dollars for " << totalphones << " phones however this plan does not include tablets"; 
    }
    if (data_Amount= 99){
        int totalphones = smart_Phones + dumb_Phones;
        int extraphone = totalphones-2;
         int vprice = 80 + 30+ (20*extraphone) + (tablet*10);
         int sprice = 60 + 40 + (30 * extraphone) + (tablet*10);
    if(totalphones <=10){
         int aplusprice = 90 + 55 + (20*extraphone) + (tablet*10);
         int achoiceprice = 60 + 45 + (20 * extraphone) + (tablet *10);
    if (vprice < sprice && aplusprice && achoiceprice){
         cout << "the best plan for you would be the verizon unlimited. it would cost you " << vprice << " dollars for " << totalphones << " phones and " << tablet << " tablets "; 
    }
    if (sprice < vprice && aplusprice && achoiceprice){
          cout << "the best plan for you would be the sprint unlimited. it would cost you " << sprice << " dollars for " << totalphones << " phones and " << tablet << " tablets ";
    if (aplusprice < vprice && sprice && achoiceprice){
        cout << "the best plan for you would be the Att unlimited. it would cost you " << aplusprice << " dollars for " << totalphones << " phones and " << tablet << " tablets ";
    if (achoiceprice < vprice && sprice && achoiceprice)
    cout << "the best plan for you would be the Att choice. it would cost you " << achoiceprice << " dollars for " << totalphones << " phones and " << tablet << " tablets ";
    }
    }
    
         }
         
    }
}
