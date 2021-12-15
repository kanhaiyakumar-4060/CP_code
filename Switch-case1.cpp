#include<iostream>
using namespace std;
int main(){

    char button;
    cout<<"input a character:-";
    cin>>button;

    switch(button){

        case 'a':
        cout<<"hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"Salut"<<endl;
        break;

        case 'd':
        cout<<"Ciao"<<endl;
        break;

        case 'e':
        cout<<"Hola"<<endl;
        break;

        default:
        cout<<"I am still learning more!"<<endl;
        break;

    }
    return 0;
}
