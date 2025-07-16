#include<iostream>
using namespace std;
int main (){

    int marks []={100,100,99};
    int n=sizeof(marks)/sizeof(int);


//find max/min value
      int max=marks[0];
      int min=marks[0];
      for(int i=0;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
        }
         if(marks[i]<min){
            min=marks[i];
        }
    
      }
    cout<<"max value is "<< max <<endl;
    cout<<"min value is "<< min <<endl;

    return 0;

    }
 