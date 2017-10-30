/************************************************
FINANCIAL SIMULATION
You have a bank account whose annual interest
rate depends on the amount of money you have
in your account at the beginning of each year. 
Your annual rate starts at 3%, and grows by an
additional half a percent for each thousand
dollars in your account up to, but not exceeding
8%. Interest in this account is compounded monthly
at the annual rate.  Each year you also make a
deposit (before the bank figures out what your
rate is, fortunately).  Write a program that
simulates these financial interactions.  It
should first ask the user how many years he
wants to simulate, and at the beginning of each
year it should ask the user how much he wants to
deposit.
***************************************************/
#include <iostream>
using namespace std;
 
int main()
{
  //Get number of years
  int Y;
  cout << "How many years would you like to simulate: ";
  cin >> Y;
 
  /*************************************************/
  /******** S I M U L A T E   Y   Y E A R S ********/
  /*************************************************/
  double B = 3000;
  for(int k = 1; k <= Y; k++) {
 
    //Get payment amount & adjust balance
    double P;
    cout << "Payment for year " << k << " : ";
    cin >> P;
    B = B + P;
 
    //Compute annual rate R
    int T = B / 1000; //Get number of 1000's
    double R = .3 + 0.05*T;//Compute rate
    if (R >= 8.0) //Correct for 8% cap
      R = 8.0;
 
    //Compute new balance with interest for the year
    double r = R/100;
    for(int i = 0; i < 12; i++)
      B = B*(1 + r/12);
  }
 
  //Print final balance
  cout << "Final balance is " << B << " dollars" << endl;
  return 0;
}
/*
How many years would you like to simulate: 10
Payment for year 1 : 500
Payment for year 2 : 500
Payment for year 3 : 500
Payment for year 4 : 500
Payment for year 5 : 500
Payment for year 6 : 500
Payment for year 7 : 500
Payment for year 8 : 500
Payment for year 9 : 500
Payment for year 10 : 500
Final balance is 7880.55 dollars


Process exited with code: 0
*/