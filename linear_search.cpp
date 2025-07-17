#include<iostream>
using namespace std;

int fun(int *arr,int n ,int key){

  for (int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
  }
  return -1;
}
int main (){
    int key=10 ;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int n=sizeof(arr)/sizeof(int);

  cout<<fun(arr,n,key)<<endl;

    return 0;
}