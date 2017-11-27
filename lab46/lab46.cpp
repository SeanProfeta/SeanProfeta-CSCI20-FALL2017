//Created by : Sean Profeta
//date Created : 11/20/17
//The point of this program is too take information from a file and output it. THe program will take a students information such as amount of classes taken and their grades in it to calclate their gpa and out put it into and html page
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <string>
using namespace std;
int main (){
    string fname;
    string lname;
    int numcourses =0;
    int hours [10]={0};
    char grade [10];
    double points[10]={0.0};
    int totalhours =0;
    double totalpoints=0.0;
    //This section is used to open the files 
    ifstream fin;
    ofstream fout;
     fin.open("input.txt");
    fout.open("output.html");
    //THis is where I put most of the variables i add a few later
    //fout.open("lab46.html");
    fout << "<!DOCTYPE html>" << endl;
    fout << "<head>" << endl;
    fout << "<title>" << "lab46"<< "</title>";
    fout <<  "<html>" << endl;
    fout << "<head>" << endl;
    fout << "<title>" << "Student" << "</title>" << endl;
    fout << "<body>" << endl;
    
   
    // This while function will work while the file is open 
    while(!fin.eof()){
        fin >> fname;
        fin >> lname;
        fin >> numcourses;
    
    for (int i=0; i < numcourses; i++){
        fin >> hours[i];
        fin >> grade[i];
    
// This is where the letter grades are calculated to the gpa.   
if(grade[i] == 'A') {
        points[i] =4.0;
    }
    else if (grade[i] == 'B'){
        points[i]=3.0;
    }
    else if (grade[i] == 'C'){
        points[i] = 2.0;
    }
    else if (grade[i] == 'D'){
        points [i] = 1.0;
    }
    else if (grade[i]== 'F'){
        points[i]=0.0;
    }
}
for( int i=0; i<numcourses;i++){
    totalhours = totalhours + hours[i];
    totalpoints=totalpoints+(hours[i]*points[i]);
    //Calculating the gpa
}
double gpa= totalpoints/totalhours;
fout << "<h1>" << "Name: " << fname << " " << lname << "<h1>" << endl;
fout <<"Number of courses enrolled in " << numcourses << endl;
fout <<"Hours Grade" << endl;

for (int i=0;i<numcourses;i++){
    fout<<setw(5) << hours[i] << " " << setw(5) << grade[i] << endl ;
}
//set the gpa to be two decimals instead of a unless number
fout << "GPA: " << fixed << setprecision(2) << gpa << endl;
totalhours=0;
totalpoints=0.0;
}
//use to close the file
fout<< "</body>" << endl;
fout << "</html>"<< endl;
fin.close();
fout.close(); 
return 0;



}