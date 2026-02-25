#include<iostream>
using namespace std;

int main(){
    int row, col, n;
    cout<<"Input your number: ";
    cin>>n;

    for(row=1;row<=n;row++){

        for(col=1;col<=n-row;col++)
            cout<<"  ";
        for(col=1;col<=n;col++)
            cout<<col;
            cout<<endl;
            
    }
}