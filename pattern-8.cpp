#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your number:-";
    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}