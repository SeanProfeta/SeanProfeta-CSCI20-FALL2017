//created by: Sean Profeta
//date Created : 11/15/17
/* This program should take a first name of no longer than 10 chacters and the last name no longer of twenty chacters. 
It should tell the user if the name is too long. it will also display if the two names and will display a warning.
*/

#include<iostream>
#include<string.h>
#include<cstring>
#include <string> 
 using namespace std;
 int main(){
     //This will get the user to eneter their first name 
     cout << "Enter your first name (>10)" << endl;
     string first_Name;
     cin >> first_Name;
     // This will see if the user's name is too long and will tell them to try again
    if (first_Name.length() > 11){
         cout << "first name is too long try again" << endl;
         return 0;
     }
     //This will get the user to eneter their last name
     cout << "Enter your last name (>20)" << endl;
     string last_Name;
     cin >> last_Name;
     // This will see if the user's name is too long and will tell them to try again
     if (last_Name.length() >21){
         cout << "last name is too long try again" << endl;
         return 0;
     }
     // This make the user reeneter their last name if the first and last name match.
    if ((first_Name.compare(last_Name) == 0)){
         cout << "The first and last match please enter last name" << endl;
         return 0;
     };
     cout <<"User full name" << endl << first_Name << ' ' << last_Name <<endl;
     
     // This portion of the program will display the different usernames
     cout << "Your suggested user names are :" << endl;
     cout << first_Name[0] << first_Name [1] << last_Name << endl;
     cout << first_Name[0] << last_Name << endl;
     cout << first_Name << last_Name << endl;
     
 }
 /*
 name 1
 Enter your first name (>10)
sean
Enter your last name (>20)
profeta
User full name
sean profeta
Your suggested user names are :
seprofeta
sprofeta
seanprofeta

name 2
Enter your first name (>10)
April       
Enter your last name (>20)
Browne
User full name
April Browne
Your suggested user names are :
ApBrowne
ABrowne
AprilBrowne

name 3 
Enter your first name (>10)
anaElizabeth
first name is too long try again

name 4


*/
