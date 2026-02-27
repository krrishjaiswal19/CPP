#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter ur first no: ";
    cin>>a;
    cout<<"Enter ur second no: ";
    cin>>b;

    //Bitwise-end operator
    int ans = a&b;
    cout<<ans<<endl;

    //Bitwise-or operator
    int ans2 = a|b;
    cout<<ans2<<endl;

    //Bitwise-xor operator
    int ans3 = a^b;
    cout<<ans3<<endl;

    //complement operator
    int ans4 = a;
    cout<<ans4<<endl;

    //Left-shift operator
    int ans5 = a<<b;
    cout<<ans5<<endl;

    //Right-shift operator
    int ans6 = a>>b;
    cout<<ans6<<endl;

}