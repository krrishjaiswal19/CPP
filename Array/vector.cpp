#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Create vector, Declare
    vector<int>v;
    
    // size and capacity
    cout<<"Size of v:"<<v.size()<<endl;
    cout<<"Size of v:"<<v.capacity()<<endl;

    // Self declare array vector
    vector<int>v1={2,3,4,5,6,10}

    // User declare array vector
    int = n;
    cin>>n;

    vector<int>v2(n);
    for(int i = 0; i<5;i++)
    cin>>v2[i];

    //Remove value form vector
    v2.pop_back(); // remove one element from end side
    v2.clear();    // remove all element
    v2.erase(v.begin()+2); // Remove index 2

    // from, back, at, empty
    vector<int>v3 = {2,3,4,5,6};
    cout<<v3.front();
    cout<<v3.back();
    cout<<v3.empty();

    

    
}
