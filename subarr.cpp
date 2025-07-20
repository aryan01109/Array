#include<iostream>
using namespace std;

void printsubarr(int *arr,int n){
 
    for (int i=0;i<=n;i++){
        for(int end=i;end<n;end++){
            // cout<<"["<<i<<" "<<end<<"]"<<" ";
            for(int j=i;j<=end;j++){
                cout<<arr[j]; 
            }
            cout<<",";
        }
        cout<<endl;

    }

}
 

int main (){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int); 

    int start=arr[0];
    int end=arr[n-1];

    printsubarr(arr,n);


    
    return 0;
}
