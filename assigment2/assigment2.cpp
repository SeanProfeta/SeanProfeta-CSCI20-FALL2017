//Created by : sean profeta
// Created date : 10/10/17
//This program is meant for a user to enter their foot size in inches and it will display their us , uk , euro , and shoe size in centimeters. 
//the point of the program is for international companies get the user to enter one number and we will be able to display the shoe size of the user no matter where they are from.
#include<iostream>
#include<iomanip>
#include<string> 
using namespace std;
//class feet {
//public :
// This part of the program takes the information you entered and calculates it and then stores it. All you need to do then is call upon it and the information will display
int ceni(int footSize) {
    return (footSize *2.54);
}
int eurosize(int footSize) {
     return( footSize * 4.14);
}
//the user get their us size
int ussize(int footSize){
    return ( footSize/1.3);
}
int   uksize(int footSize) {
    return(footSize /1.4);
} 

//private :
// The main function is where the program takes all the stored data and returns it to display all the information we need to know-
int main(){
    int footin = 0;
    cout << "enter foot size in inches " <<endl;
    cin >> footin;
int usSize= ussize(footin);
int ukSize=uksize(footin);
 int euroSize =eurosize(footin);
 int centimeters = ceni(footin);
    cout<<"Your foot size is " <<footin << " inches" << endl;
    cout << "your US size is " << usSize <<" your euro size is " << euroSize <<" your uk size is "<<  ukSize << " and in centimeters is " << centimeters << " long";
    return 0;
}
/* Running /home/ubuntu/workspace/assigment2/assigment2.cpp
enter foot size in inches 
15
Your foot size is 15 inches
your US size is 11 your euro size is 62 your uk size is 10 and in centimeters is 38 long

Process exited with code: 0
\*