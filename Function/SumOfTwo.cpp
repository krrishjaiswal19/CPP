#include<iostream>
using namespace std;

int Sum(int m, int n) // Function declare
{
    int ans = m+n; // Function define
    return ans;
}

int Mul(int m, int n){
    int ans = m*n;
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
    
    // Function call
    cout<<Sum(a,b);
    cout<<endl;
    cout<<Mul(a,b);
}