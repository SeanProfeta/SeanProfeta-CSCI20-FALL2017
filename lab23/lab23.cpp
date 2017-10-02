#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

void Randnum(int Num1,int Num2) {
   srand(time(0));
    int num3 = rand()% (Num2-Num1)+ Num1;
    cout << "Your numbers are " << Num1 << " and " << Num2 << " the selected number is " << num3;
}
    int change(int Num1,int Num2) {
        if (Num2 <Num1);
        std :: swap (Num2, Num1);
        
    }
    

    main(){
        int num1 = 1;
        int num2 = 1;
        
        cout << " pick a number " << endl;
cin >> num1;
cout << " pick a number " << endl;  
cin >>num2;
change;
        Randnum(num1,num2);
        return 0;
    }
/* pick a number 
1
 pick a number 
55
Your numbers are 1 and 55 the selected number is 47
 pick a number 
33
 pick a number 
22
Your numbers are 33 and 22 the selected number is 33

*/