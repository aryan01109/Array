#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *ptr=&a;
    cout<<ptr<<endl;//address
    cout<<*ptr<<endl;//3
    cout<<a<<endl;//3

    int arr[] = {1,2,3};
    int n=sizeof(arr)/sizeof(int);
    // cout<<*arr<<endl;//1
    // cout<<*(arr+1)<<endl;//2
    // cout<<*(arr+2)<<endl;//3

    cout<<arr[0]<<endl;//1
    cout<<arr[1]<<endl;//2
    cout<<arr[2]<<endl;//3





    return 0;

}