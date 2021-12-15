
#include<iostream>
using namespace std;
int main(){
    
    char button;
    cout<<"input a character:-";
    cin>>button;
     
    if(button=='a'){
        cout<<"Hello"<<endl;
    }
    else if(button=='b'){
        cout<<"namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"hola"<<endl;
    }
    else if(button=='d'){
        cout<<"salut"<<endl;
    }
    else if(button=='e'){
        cout<<"cios"<<endl;
    }
    else{
        cout<<"I am still learning"<<endl; 
    }
    return 0;
}