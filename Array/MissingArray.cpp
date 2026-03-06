#include<iostream>
using namespace std;

int main()
{
    int arr [5] = {1,3,4,5,6};
    int sum = 0;
    int n=6;

    for(int i=0;i<5;i++){
    sum+=arr[i];
    }
    int ans = n*(n+1)/2;
    cout<<"Missing number: "<<ans-sum;
    return 0;
}