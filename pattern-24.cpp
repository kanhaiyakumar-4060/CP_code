#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your number:-";
    int n;
    cin>>n;
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=2*n-1; j++){
            if(j>=6-i && j<=i+4 )
            {
              if(i%2==0 && j%2==0 || i%2!=0  && j%2!=0)
                 cout<<"* "<<" ";
              else  cout<<"  "<<" ";
            }
            else cout<<"  "<<" ";
        }
        cout<<endl;
    }
    return 0;

}