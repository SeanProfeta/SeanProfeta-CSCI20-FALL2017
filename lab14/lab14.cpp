//created by Sean Profeta
// Date Created : 9/6/17
// this program will function as a coinstar machine and it will calculate this number into currency. It will logically sort them into quaters, dimes , nickles, and pennies. Such as if i enter the number 86 The machine will display 3 quarters,
//1 dime, and 1 penny 
#include <iostream>
using namespace std;
int main () {
    //the orginal amount begin turned into quaters 
    int orginalamount=100;
    int change= 100%25;
    int quaterAmount= orginalamount/25;
    //The left over begin turned into dimes 
   int   dimeAmount = change/10;
  int   change1= change%10;
  //chnage1 begin changed into nickles 
  int nickleAmount= change1/5;
  int change2 = change1%5;
  // change2 begin changed into pennies 
  int penniesAmount= change2/1;
  int change3 = change2%1;
  //turning all the coins into a us dollars.
  double moneyBack = ((quaterAmount * .0025)+ (dimeAmount *.0010) +  (nickleAmount * .0005) + (penniesAmount *.0001)) /.0109;
  
  
    cout << " you entered " << orginalamount<< " coins" " , you will get $"<< moneyBack  << " ." << "you entered " <<quaterAmount <<" quarters" << " ," <<dimeAmount<< " dimes," << change2<< " nickles, " << change3 << " pennies, with " <<change3 << " leftover";
}

