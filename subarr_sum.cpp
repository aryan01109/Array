#include<iostream>
using namespace std;

void subarrsum(int *arr,int n){

    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int csum=0;
            for(int k=i;k<=j;k++){
                csum += arr[k];
            }
            // cout<<csum;
            maxsum=max(maxsum,csum);
            

        }
        //cout<<endl;
    }
     cout<<"max sum of arr is "<<maxsum;
}


int main (){
    int arr[]={1,-5,3,8,-2,6};
    int n=sizeof(arr)/sizeof(int);

    // int maxsum;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int csum=0;
    //         for(int k=i;k<=j;k++){
    //             csum += arr[k];
    //         }
    //         // cout<<csum;
    //         maxsum=max(maxsum,csum);

    //     }
    //     // cout<<endl;
    // }
    // cout<<"max sum of arr is "<<maxsum;

subarrsum(arr,n);
     
return 0;
}

