 #include<iostream>
 using namespace std;

 void buysell_stocks (int *prices,int n){
    int bestbuy[100000 ];
    bestbuy[0]=INT_MAX;
    cout<<bestbuy[0]<<" "<<",";
    for(int i=1 ;i<n;i++){
      bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
      // cout<<bestbuy[i]<<" "<<",";

   
   }
   
   int maxprofit=0;
   for(int i=0;i<n;i++){
      int currentprofit=prices[i]-bestbuy[i];
      maxprofit=max(maxprofit,currentprofit);
   }
   cout<<endl;
   cout<<"max profit is : "<<maxprofit<<endl;
   // cout<<bestbuy;
 }


 int main (){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);

   //  int maxprice=INT_MIN ;
   //  int minprice=INT_MAX;
   //  int sellday;
   //  int bestbuyprice=10000;
   //  int bestsellprice=0;
   //  int profit=0;  

   //    for(int i=0;i<n;i++){
   //    minprice=min(bestbuyprice,prices[i-1]);
   //    bestbuyprice=minprice;

   //    maxprice=max(bestsellprice,prices[i]);
   //    bestsellprice=maxprice;

   //  }

   //  profit=bestsellprice-bestbuyprice;


   // cout<<"best stocks buy price is : "<<bestbuyprice<<endl;
   // cout<<"best stocks sell price is : "<<bestsellprice<<endl;
   // cout<<"profit is : "<<profit;
    
    buysell_stocks(prices,n);
    return 0;  
 }