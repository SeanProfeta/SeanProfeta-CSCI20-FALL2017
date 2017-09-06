// Created by Sean Profeta
// Date: 8/30/17
#include <iostream>
using namespace std;
int main ()
{
    // The are the orignal number we are basing this off of. They started at mintues and will transfer to years.
    //change the years to get a differnent answer 
    //The Equation to turn births per min into per year
     int years = 55;
    int birthPerMin=7.5;
    int birthPerHour = birthPerMin *60;
    int birthPerDay = birthPerHour * 24;
    int birthPerYear = birthPerDay * 365;
    //The Equation to turn death from min to years
    int deathPermin=5;
    int deathPerHour= deathPermin * 60;
    int deathPerDay= deathPerHour * 24;
    int deathPerYear = deathPerDay * 365;
    // The equation to turn migrant per min into years 
    int migrantPerMin = 1.8;
    int migrantPerHour = migrantPerMin * 60;
    int migrantPerDay = migrantPerHour * 24;
    int migrantPerYear = migrantPerDay * 365;
     // These variables are the computer adding the numbers together in order to get to the new US population.
    int popIncrease =birthPerYear + migrantPerYear;
    int netGrow = popIncrease - deathPerYear;
    int growPerYear= netGrow * years ;
    int usPop=325770151;
    int newPop = growPerYear + usPop;
  cout << "The births per year is " <<   birthPerYear << " the deaths per year is " << deathPerYear << " the mingrants per year is "<< migrantPerYear <<" the net growth per year is "  << netGrow << " and after " << years << " years the new population is " << newPop;
  return 0;
  
}