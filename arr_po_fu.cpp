#include<iostream>
using namespace std;

//using function

void fun(int arr[]){ 
    arr[0]=100;

//same as

//void fun(int *ptr){
// ptr[0]=100; 
//}
}
void parr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<endl;
    }
}
 
int main (){

    int a=3;
    int *ptr=&a;
    // cout<<ptr<<endl;//address
    // cout<<*ptr<<endl;//3
    // cout<<a<<endl;//3

    int arr[] = {1,2,3};
    int n=sizeof(arr)/sizeof(int);
    // cout<<arr[0]<<endl;//1
    // cout<<arr[1]<<endl;//2
    // cout<<arr[2]<<endl;//3
    
    
    // fun(arr);//call function 1
    // cout<<arr[0]<<endl;

    parr(arr,n);

    return 0;
}