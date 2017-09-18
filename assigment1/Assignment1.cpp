//created by Sean Profeta
// Date: 9/18/17
/* The goal of this program is the user will enter their weight, height, and age in the Imperial system and the program will switch it into the metric number. It will then display all your information and display
your maintince calories with two differnt formuals the "mifflin - st jeor formula" and the "harris-benedict formula". It will also show you how much of one kind of food you will need to eat to be able to meet these calories.
*/
#include <iostream>
#include <string>
using namespace std;
struct userHealth {
    string userinfo;
    string name;
    int age ;
    int weight ;
   int heightFt;
   int heightCm;
    
};

//The users information 
int main () {
userHealth user1;
cout << "enter your name" << endl;
cin >> user1.name;
cout << "age " << endl;
cin >> user1.age;
cout << "weight" << endl;
cin >> user1.weight ;
cout << "height in ft" <<endl;
cin >> user1.heightFt ;
cout << "height in cm" << endl;
cin >> user1.heightCm;
// This is where the program takes over and convert all the user information into the metric system 
 int userKg = user1.weight * .45 ;
 int userHeightFt = user1.heightFt * 30.48;
 int userHeightCm = user1.heightCm * 2.54;
 int userMonths = user1.age *12;
 double totalHeight = userHeightFt + userHeightCm;
 //The mifflin -st jeor formula 
double mifflin = 10 * userKg + 6.25 * totalHeight - .41 * userMonths  +5;
double cupChicken = mifflin/231;
//The Harris-Benedict formula
double harris = 66.5 + (13.75 * userKg) + (5.003 * totalHeight) - (6.775 * user1.age);
double cupChicken1 = harris/231;
cout << user1.name <<endl;
cout << "Age(months) : " << userMonths <<" User Weight(Kg): " << userKg << " User Height(Cm): " << totalHeight << endl;
cout << "you maintince calories using the mifflin -st jeor formula is " << mifflin<< endl;
cout << "in order to meet this you would need to eat " << cupChicken << " cups of chicken" << endl;
cout << "your maintince calories using the The Harris-Benedict formula is " << harris << endl;
cout << "in order to meet this you would need to eat " << cupChicken1 << " cups of chicken";
};
