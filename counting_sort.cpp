#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void count(int arr[],int n){
    int freq[100000];
    int minval=INT_MAX,maxval=INT_MIN;

    //calculate max or min
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);

    }
    //calculate freq
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    //arrange assending order
    for(int i=minval,j=0;i<=maxval;i++ ){
        while(freq[i]>0){
             arr[j++]=i;
             freq[i]--; 
        }
    }
    print(arr,n);
    
}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);

    count(arr,n);
    
    return 0;
}