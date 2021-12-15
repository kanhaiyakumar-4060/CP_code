#include<iostream>
using namespace std;
int main(){

    int i=0;
    int j;

    j = i++ - --i + ++i - i--;

    cout<<j<<endl;

    return 0;
}