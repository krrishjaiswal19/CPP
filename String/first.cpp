#include<iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>> s;  // Don't have property to read space, tab & enter
    getline(cin,s); // In string to get correct Input/output
    cout<<s;

    // Get size of string
    string s1 = "Krrish";
    cout<<s.size();

    // Add element
    s1.push_back('p');

    // Remove element
    s1.pop_back();\

    // Append operation
    string s2 = "Krrrish",s3 = "jaiswal";
    string s4 = s1+s2;
    cout<<s4;

    // Reverse string
    string s5 = "krrish";
    int start = 0, end = s5.size()-1;
    while(start<end)
    {
        swap(s5[start].s5[end]);
        start++, end--;
    }
    cout<<s5;

    //Size of string
    string s6 = "krrish";
    int size = 0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";


    // Stirng palindrome
    string s7 = "naman";
    start = 0, end =s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end])
        {
            cout<<"Not a palindrone";
            return 0;
        }
        start++, end--;
    }
    cout<<"It is palindrone: ";
}   
