#include<iostream>
using namespace std;

int main(){
    int a, b,c;
    cout<<"Enter ur first no: ";
    cin>>a;
    cout<<" Enter ur second no: ";
    cin>>b;
    cout<<"Enter ur third no: ";
    cin>>c;

    if(a>b&&a>c){
        cout<<"A is greater";
    }else if(b>a&&b>c){
        cout<<"B is greater";
    }else if(c>a&&c>b){
        cout<<"c is greater";
    }else
        cout<<"enter valid input";
}