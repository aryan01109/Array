#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int key=12;
  

    int start=0;
    int end=n-1;
    bool found=false;
    
    while (start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
        cout<<"Value found at index: " << mid << endl;
        found=true;
        break;
        }
        else if(arr[mid]<key){
             start=mid+1;

        }else{
              end =mid-1;
             
        }

    }
    if(!found){
            cout << "Key not found in array." << endl;
        }
    return 0;
}