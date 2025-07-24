#include<iostream>
using namespace std;

void vellyfun(int *heights , int n ){

    //  left side max 
    int leftmax[20000];
    leftmax[0]=heights[0 ];
    // cout<<leftmax[0]<<",";

    // right side max 
    int rightmax[20000];
    rightmax[n-1]=heights[n-1];
   

    for(int i=1;i<n;i++){
        // cal left side max value of index [i]
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
        //  cout<<leftmax[i]<<",";

    }
    for(int i=n-2;i>=0;i--){
    //cal right side max value of index [i]
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
        // cout<<rightmax[i]<<",";  

     }//cout<<rightmax[n-1]<<","<<endl;  
    int trap=0;
    for(int i=0;i<n;i++){
        int currenttrp=min(rightmax[i],leftmax[i]) -heights[i];
        if(currenttrp > 0){
            trap += currenttrp; 
            // cout<<currenttrp<<endl;
        }


    }cout<<"total value of trap is : "<<trap<<endl;
    

}
int main (){
    int heights[]={4,2,0,6,3,2,5};
    int n=sizeof(heights)/sizeof(int);


    vellyfun(heights,n);

    return 0;
}