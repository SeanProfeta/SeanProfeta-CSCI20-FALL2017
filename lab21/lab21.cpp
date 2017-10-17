// created by :Sean Profeta 
//date created : 10/16/17
/* the program purpose is the take the entered information  and eneter it in two differnt formuals and to ouput the new and old chill 
so the user know the proper wind chill */

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    // this is where the user enters the info so it is able to plug it into formuals 
    double temp= 0;
    double windspeed=0;
    cout << "outside tempture " <<endl;
    cin >> temp;
    cout << " wind speed" << endl;
    cin >> windspeed;
    //this part of the programs is what run the information througe the formuals  
    int sqchill= sqrt(windspeed);
    double powchill= pow(windspeed,0.16);
    int oldchill=.081*(3.71 * sqchill) + 5.81-0.25*windspeed*(temp-91.4)+91.4;
    int newchill = 35.74 + 0.6125 * temp - (35.7 * -powchill) + 0.4275 * temp * windspeed;
    
    cout << "the old wind chill formula shows the wind chill is " << oldchill << endl;
    cout << "the new wind chill formula shows the wind chill is " << newchill;
}

/*
outside tempture 
30
 wind speed
4
the old wind chill formula shows the wind chill is 159
the new wind chill formula shows the wind chill is 149

outside tempture 
39.25
 wind speed
10
the old wind chill formula shows the wind chill is 228
the new wind chill formula shows the wind chill is 279

outside tempture 
100
 wind speed
2
the old wind chill formula shows the wind chill is 93
the new wind chill formula shows the wind chill is 222

*/