// Divide array in 2 subarray with equal sum

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int totalSum = 0;
    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }

    int prefix = 0;

    for(int i = 0; i < n; i++){
        int rightSum = totalSum - prefix - arr[i];

        if(prefix == rightSum){
            cout << "Pivot index: " << i;
            return 0;
        }

        prefix += arr[i];
    }

    cout << "No pivot index";
    return 0;
}


