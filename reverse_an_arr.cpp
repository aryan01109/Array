#include<iostream>
using namespace std;


// with using extra space
// int revfun(int *arr,int n){
//     int num;
//     int copyarr[n];

//     for(int i=0;i<n;i++){
//          int j=n-i-1;
//          copyarr[i]=arr[j];
//     } 
//     for(int i=0;i<n;i++){
//         arr[i]=copyarr[i];

//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<",";
//     }
//      return 0; 
// }

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
//     //call function
//     revfun(arr,n);


//     return 0;
// } 



//without using etra space


 
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    int start=0, end=n-1;
    while(start < end){
        // swap_number

        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp; 

         start++;
        end--;  
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }


    return 0;
}