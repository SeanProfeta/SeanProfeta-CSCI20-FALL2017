#include <iostream> // This allows us to use the standard c++ libary
#include <iostream> // Error: iostream is declared again which can cause an problem 
#include <cstring> // This allows us to use the standard c string libary
using namespace std;   // We are going to be using the name space std which allows us more access to the c++ libary 

int main() { // This is the opening for what going to be in the main function. this will open the code till line 62
    int nameLength = 0; // This is declaring nameLength is going to be 0
    char * name = new char[]; // This is assinging a pointer to name however the array has an error due to nothing in their. also there is no need for the new

    cout << "Please enter a 10 letter word or less" << endl; //This is displaying please enter a 10 letter word or less and then have a new line
    cin >> name; // This is where the program gets the user to enter 

    char * head  = name; // This assings a point to head for name
    char * tail = name; // This assigns a pointer to tail for a name
    nameLength = strlen(*name); // this is equaling nameLength to the pointer name

    cout << "Your word is " << firststr << endl;  // This is displaying Your word is and then what ever firstsrt is and then a new line

    if (nameLength<10) //what is inside the if statement will only run if name length is less then 10 however if should be <= so the user can have a ten letter name 
    { // opens code till line 26
         while (*head != '\0') // this portion of the code will only run while head is not equal to a null chacter 
         {// open code till line 25
                cout << *head; // This will display what the pointer of head was
                head++; // This will run the code and add 1 to head each time till the code reachs the above requirment 
         }// close code from line 22
     } // closes line from 20
     else // if the if statement is not true this will display
     {// open code till line 30
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // This will display that the warning word is too big to display!!
     } // close code till line 28

     cout << endl; // This will just add a new line

     tail = &name[strlen(name) - 1]; // this is equaling variable tail to refrence name's array and have the length of name -1

     if (nameLength < 10) // This code will run if nameLength is less then ten
     {// opens till 43
          while (tail != name)// this will run while tail is not equal to name
          {//open till 42
                 cout << *tail; // This will display the pointer of tail 
                 tail--; // this will subtrct tail by 1 until the above requriment is no longer true
          } // close code from line 39
     } //closes code from line 37
     cout << endl; // this will display a new line

     head = name; // this will set the vairable head to name
     tail = &name[strlen(name) - 1]; // This will set tail to the refer to name that is the length of name and subtracted by 1

     head++; // This will add head by one
     tail--; // this will subtract tail by one

     if (*head == *tail) // this will only run if the head pointer is set to the pointer tail
     {// this will open the code till line 55
         cout << "It is an palindrome!" << endl; // This will display it is an palindrome.i dont know if its a error but it should a palindrome
     }// close the code from line 53 
     else // this part of the code will run if the if statment is not true 
     {// this will open this code till line 59
         cout << "It is not an palindrome" << endl; // this will display it is not an palindrom. i dont know if its a error but it should a palindrome 
     } // this will close the code from line 57

     return 0; // this will end the code 
} // this will close the code from line 6