#include<iostream>
using namespace std;

int main(){
    char name;
    cout<<"Enter ur Alphabet: ";
    cin>>name;

    if(name=='a'||name=='b'||name=='e'||name=='i'||name=='o'||name=='u' ){
        cout<<"Alphabet is vowel";
    }else
        cout<<"Alphabet  is constants";
}