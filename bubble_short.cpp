#include<iostream>
using namespace std;

int main(){
    int arr[]={5,3,4,1,2};
    int n=sizeof(arr)/sizeof(int);

    int maxnum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }

    return 0;
}