#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your number:-";
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n)
            cout<<"* "<<" ";
            else
            cout<<"  "<<" ";
        }
        cout<<endl;
    }
    return 0;
}