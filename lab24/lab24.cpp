// These includes are need for the function to work. The algorithm is needed for the swap function to work while the ctime is used for the random function.   
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
// This function is where every thing is entered to be converted to a random number , kilograms , and pounds.
void Randnum(int Num1,int Num2) {
    //THis section is given to make the random number switch everytime and not stick to one number
   srand(time(0));
     // random number selection
    int num3 = rand()% (Num2-Num1)+ Num1;
    cout << "Your numbers are " << Num1 << " and " << Num2 << " the selected number is " << num3 << endl;
    // Pounds to Kilograms
    double ptk = num3/2.2;
    // kilograms to pounds 
    double ktp = ptk * 2.2;
    cout << "This converted to kilograms is " << ptk <<" Kg" << endl;
    cout << "now we will be converting the kilograms to pounds which is " << ktp << " lbs " << endl;
    
}
 //This is where the swap function takes place
    int change(int Num1,int Num2) {
        if (Num2 <Num1);
        std :: swap (Num2, Num1);
        
    }
    
// This is the main function where everything is called upon and is given the return value 
    main(){
        //These are need in order for the cin to work
        int num1 = 1;
        int num2 = 1;
        
        cout << " pick a number " << endl;
cin >> num1;
cout << " pick a number " << endl;  
cin >>num2;
change;
        Randnum(num1,num2);
        // THis is where we get our return
        return 0;
    }
/*
pick a number 
1
 pick a number 
200
Your numbers are 1 and 200 the selected number is 113
This converted to kilograms is 51.3636 Kg
now we will be converting the kilograms to pounds which is 113 lbs 
*\