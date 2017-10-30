// created by Sean Profeta
// date creatred : 10/30/2017
/* this program will be making a game called hi oh cherry oh! The game will give two players a three with a random amount of cherrys and spin a number 
thats between 1-7 which will each have its own consquence/reward this game will go untill one players tree has no cherries.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;
main(){
      srand(time(0));
    int pickcherries = rand()%7+1;
    cout << "type in ten " << endl;
    cout<< pickcherries;
    for (int treecherries=10; treecherries>0;treecherries=0){
        if (pickcherries==1) { 
            pickcherries -1; 
            cout << pickcherries <<endl;
        }
    if (pickcherries ==2){
        treecherries-2;
        cout <<treecherries;
    }
    if (pickcherries== 3){
        treecherries-3;
        cout<< treecherries<< endl;
    }
    if (pickcherries==4){
        treecherries -4;
        cout << treecherries<< endl;
    }
    if (pickcherries==5 || 6){
        if (treecherries <=8){
            treecherries +2;
            cout << treecherries<< endl;
        }
        if (pickcherries <=9){
            treecherries+1;
            cout << treecherries<< endl;
        }
        
    }
    if (pickcherries == 10){
        treecherries =10;
        cout << treecherries<< endl;
    }
}
}