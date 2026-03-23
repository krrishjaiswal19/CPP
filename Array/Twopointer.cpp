// Segregate 0 and 1
#include<iostream>
using namespace std;

int main(){
int start = 0, end = n-1;
while(start<end)
{
    if(arr[start]==0)
    start++;
    else{
        if(arr[end]==0)
        {
            swap(arr[start],arr[end]);
            start++, end--;
        }else
        end--;
    }
}
}

// Two sum
#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 4, 6};
    int n = 5;
    int target = 7;

    int start = 0, end = n - 1;

    while(start < end){
        int sum = arr[start] + arr[end];

        if(sum == target){
            cout << "Found pair: " << arr[start] << " " << arr[end];
            return 1;
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
    }

    cout << "No pair found";
    return 0;
}
