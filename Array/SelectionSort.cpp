#include <iostream>
using namespace std;

int main() 
{
  int arr[1000];
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  cout<<"Enter the elelment in array: ";
  
  for(int i=0; i<n;i++)
  cin>>arr[i];
  
  for(int i=0;i<n;i++)
  {
    int index = i;
    for(int j=i+1;i<n;i++)
    {
      if(arr[j]<arr[index])
      index=j;
    }
    swap(arr[i], arr[index]);
  }
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }
}