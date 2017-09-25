// Created by : Sean Profeta
//Date Created : Sean Profeta
// This program purpose is to have a function called upon that will declare a radom function each time the run button is displayed and have it in a nice simple sentence.

//You need to declare all of these in order for it to run probably 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//This is a function to be called later
int randomnum(){
    //This is need so the random number is a differnt output each time Ex : before I add this I got 84 everytime
    srand (time(0));
    // The +1 is need in order for it to be 1-100 with out it, it will be 0-99
    int randomNum = rand()%100+1;
   cout << "your number is " << randomNum;
}
int main(){
    // This is where the function is called
    randomnum();
}