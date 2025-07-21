#include<iostream>
using namespace std;

void subarr(int *arr,int n){
    int maxsum=INT_MIN;
    int csum=0;
    for(int i=0;i<n;i++){
        csum +=arr[i];
        maxsum=max(maxsum,csum);

        if(csum<0){
            csum =0;
        }
        
    }
    cout<<"max sum of arr is :"<<maxsum;

}

int main (){
    int arr[]={1,-5,3,8,-2,6};
    int n=sizeof(arr)/sizeof(int);


    subarr(arr,n);
    return 0;
}
