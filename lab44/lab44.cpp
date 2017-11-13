//created by: Sean Profeta
//date Created : 11/13/17
/* This program should take a first name of no longer than 10 chacters and the last name no longer of twenty chacters. 
It should tell the user if the name is too long. it will also display if the two names and will display a warning.
*/

#include<iostream>
#include<string.h>
#include<cstring>
 using namespace std;
 int main(){
     //This will get the user to eneter their first name 
     cout << "Enter your first name (>10)" << endl;
     char first_Name[11];
     cin >> first_Name;
     // This will see if the user's name is too long and will tell them to try again
     while (strlen(first_Name) > 11){
         cout << "first name is too long try again" << endl;
         cin >> first_Name;
     }
     //This will get the user to eneter their last name
     cout << "Enter your last name (>20)" << endl;
     char last_Name[21];
     cin >> last_Name;
     // This will see if the user's name is too long and will tell them to try again
     while (strlen(last_Name) >21){
         cout << "last name is too long try again" << endl;
         cin >> last_Name;
     }
     // This make the user reeneter their last name if the first and last name match.
     while ((strcmp(first_Name,last_Name) == 0)){
         cout << "The first and last match please enter last name" << endl;
         cin>>last_Name;
     };
     cout <<"User full name" << endl << first_Name << ' ' << last_Name <<endl;
     
     // This portion of the program will display the different usernames
     cout << first_Name[0] << first_Name [1] << last_Name << endl;
     cout << first_Name[0] << last_Name << endl;
     cout << first_Name << last_Name << endl;
     
 }
 /*
 Enter your first name (>10)
jhsdkjhkgjdgjlksdjglkjslgjklsdjgksdjg
first name is too long try again
sean
Enter your last name (>20)
isdjlgjseiojgiosjoigjseiojgiesjgjseijgsjogjseojgoesjgowejsgojsiojgioejgioesjiogjesiojgsjiegjioes
last name is too long try again
sean
The first and last match please enter last name
profeta
User full name
sean profeta
seprofeta
sprofeta
seanprofeta
*** stack smashing detected ***: /home/ubuntu/workspace/lab44/lab44.cpp.o terminated
bash: line 12: 31263 Aborted                 $file.o $args
*/