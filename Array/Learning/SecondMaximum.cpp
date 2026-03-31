#include<iostream>
using namespace std;

int main()
{
    int arr[7]={1,6,4,3,8,5,7};
    int largest = -1;
    int second = -1;

    for(int i=0; i<7;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }

    for(int i=0;i<7;i++)
    {
        if(arr[i]!=largest && arr[i]>second){
        second=arr[i];
        }
    }
    cout<<"Second largest: "<<second;
    return 0;
    

}