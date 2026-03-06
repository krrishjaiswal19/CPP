#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10,27,7,11,8,4};
    int index =-1; 
    int find = 11;

    for(int i=0;i<6;i++){
        if(arr[i]==find)
        {
            index = i;
            break;
        }
    }
    cout<<index;


}

