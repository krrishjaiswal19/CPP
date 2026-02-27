#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter Second number: ";
    cin>>b;

    if(a==b)
        cout<<"Both are equal";
    else if(a>b)
        cout<<"a greater than b";
    else if(a<b)
        cout<<"b greater than a";
    else
    cout<<"enter valid input";
}

// ==, > , < ,>= , <= , !=