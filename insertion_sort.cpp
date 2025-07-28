#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
}

int main (){

    int arr[]={5,4,2,3,1};
    int n=sizeof(arr)/sizeof(int);

    for(int i=1;i<n;i++){
        int current =arr[i];
        int prew=i-1;
        while(prew>=0 && arr[prew]>current){
            swap(arr[prew],arr[prew+1]);
            prew--;
        }
        arr[prew+1]=current;
    }
    print(arr,n);

    return 0;
}