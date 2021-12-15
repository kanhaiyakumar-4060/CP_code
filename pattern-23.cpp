//1 4 7 10 13 16 19
#include<iostream>
using namespace std;
int main(){
 
  // 1 1
  int n;
  cout<<"Kitna tk chALIYEGA :";
  cin>>n;  // 10   -  1 1 2 3  5 8 13 21 34 55
 int sum = 1;
 int k =2;
  for(int i =1;i<=n-1;i++)
  { 
    cout<<sum<<" ";
    sum = sum + k++;
      
  }

    return 0;
}