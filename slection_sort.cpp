#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
}
 
int main (){
    int arr[]={5,3,2,1,4};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);

    }
    print(arr,n);

    return 0;
}