#include<iostream>
using namespace std;
 int main(){
     cout<<"Enter your number";
     int n;
     cin>>n;
int k = 2*4+1;
     for(int i=1; i<=n; i++){
         for(int j=1; j<=n; j++){
            //  if(j<=i){
            //      cout<<"*"<<" ";
            //  }
            
             if(i==j)  cout<<i<<" ";
             else if(i-j==1) cout<<k--<<" ";
             else cout<<" "<<" ";
         }
         cout<<endl;
     }
     return 0;

 }