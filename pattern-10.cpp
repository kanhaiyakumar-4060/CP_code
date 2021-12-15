#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your number:-";
    int n;
    cin>>n;
    int k=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<k++<<"\t";
        }
        cout<<endl;
    }
    return 0;

}