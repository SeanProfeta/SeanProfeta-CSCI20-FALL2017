#include <iostream>
#include <string>
using namespace std;
//This is the 
class ArrayTools { 
private:
 int size;
 int myArray[];
public:
// These will sort out the array so the number disired will pop out in the main function 
ArrayTools(int myArray[],int size);
 int Find_min(int myArray[], int size) const;
 //int Find_max(int myArray[],int size) const;
 int Find_sum();
 int Nums_even_and_odd();
 //int Search (int find);
 void print() const;
//This function will search througe the array and find certain values 
int ArrayTools::Search(int find){
 bool flag=false;
 for (int i=0; i< size; ++i){
  if(myArray[i] == find){
   flag=true;
   return i;
  }
 }
 return -1;
}

// This function will find the min value and return it
int ArrayTools::Find_min(int myArray[],int size) const {
 int min= myArray[0];
 for(int i=0; i<size;i++){
  if(min>myArray[i]){
   min= myArray[i];
  }
 }
 return min;
}
//This function will find the max number in the array and return it 
/*
int ArrayTools :: Find_max(int myArray[},int size) const{
 int max = myArray[0];
 for (int i=0;i<size,++i){
  if (max < myArray[i]){
   
  }
 }
 return max
}
*/
//This function will find the even and odd numbers in the array
//function to find the sum
int ArrayTools::Find_sum() {
//finds the sum of the array
int sum = 0;
for(int i = 0; i < _size; i++) {
sum = sum + _myArray[i];
} 
return sum;
}

 int ArrayTools:: Nums_even_and_odd(){
  //Evens 
  for (int i=0; i < size; i++){
   if (myArray[i]%2==0){
    cout << " " << myArray[i];
   }
  }
  //odd
   for int(int i=0; i< size; i++){
    if (myArray[i]%2!=0){
    cout << " " << myArray[i]; 
    }
   }
 }
 //overload constructor
 ArrayTools::ArrayTools(int myArray[],int size){
  for(int i=0; i <size; i++){
   myArray[i]=myArray[i];
  }
  return;
 }
// this function will print all the returned values 
void ArrayTools:print() const {
 cout << "The numbers in the array are" << endl;
 for (int i=0;i< size; i++){
  cout << myArray[i] << endl;
 }
 return;
}



int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,size);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    //cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    //cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}