#include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter Row : ";
    cin>>row;
    // for(int i=1;i<=row;i++)
    // {
    //     for(int j=1;j<=row;j++)
    //     {
    //         if(i==1 || i==row || j == 1 || j== row) cout<<"* "<<"";
    //         else cout<<"  "<<"";
    //     }
    //     cout<<"\n";
    // }
    char k = 'A';

    for(int i=1;i<=row;i++)
    {
        
        char ch = k;
       for(int j=1;j<=row;j++)
            {
                if(i==1 || i==row) cout<<ch++<<" ";
                else if(j==1 || j==row)  cout<<ch++<<" ";
                else cout<<"  "<<""; 
            }
           k++;
            cout<<"\n";
    }
return 0;
}