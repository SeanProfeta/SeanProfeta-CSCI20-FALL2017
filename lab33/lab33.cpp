//created by :Sean Profeta
//created by : 10/18/17
/* this lab is to create a gusseing game that will have a user input a number 
between 1-50 and if the user pick a number too high/low program will tell them to pick 
another number. if the number is between 1-50 and is too low it will say too low same as the high numbers.
will tell user just right if they get the number.
*/
#include <iostream> 
#include <ctime>
#include <cstdlib>
using namespace std;

main(){
    int user_Num=0;
    cout << "user enter number between 1 and 50" << endl;
    cin >> user_Num;
    srand(time(0));
    if (user_Num <= 0){
      cout<< "number entered too low pick again"<< endl;
    }
    if (user_Num >= 51 ){
    cout << "number entered too high pick again" << endl;}
    if ( (user_Num <= 50) && (user_Num > 0 )){
        cout << "5" << endl << "4" << endl << "3" << endl << "2" << endl << "1" << endl;
         int rand_Num= rand()%50+1;
         if (user_Num > rand_Num){
            cout <<" number too high guess again" << endl;
             cout << "user enter number between 1 and 50" << endl;
    cin >> user_Num;
     for  ( user_Num < rand_Num){
    cout << "number too low guess again" << endl;
     cout << "user enter number between 1 and 50" << endl;
    cin >> user_Num;
    }
   for (user_Num == rand_Num){
        cout << " number is just right " << "the number is " << user_Num ;
    }
         }
    for ( user_Num < rand_Num){
    cout << "number too low guess again" << endl;
     cout << "user enter number between 1 and 50" << endl;
    cin >> user_Num;
      for  (user_Num > rand_Num){
            cout <<" number too high guess again" << endl;
             cout << "user enter number between 1 and 50" << endl;
    cin >> user_Num;
   for  (user_Num == rand_Num){
        cout << " number is just right " << "the number is " << user_Num ;
    }
    for (user_Num == rand_Num){
        cout << " number is just right " << "the number is " << user_Num ;
    }
      }}
}
}
/*
user enter number between 1 and 50
52
number entered too high pick again

user enter number between 1 and 50
0
number entered too low pick again

user enter number between 1 and 50
24 
5
4
3
2
1
 number too high guess again
user enter number between 1 and 50
18

user enter number between 1 and 50
2
5
4
3
2
1
number too low guess again
user enter number between 1 and 50
35
 number too high guess again
user enter number between 1 and 50
24
*/