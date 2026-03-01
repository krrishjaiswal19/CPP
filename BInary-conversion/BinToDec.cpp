#include<iostream>
#include<cmath> // Mathematical functions ke liye, yaha hum pow() use kar rahe hain.
using namespace std;

int main(){
    long long binary; // Binary number store karega (bada number handle karne ke liye).
    int decimal = 0, // Final decimal result store karega.
    remainder; // last digit nikalne ke liye

    cout<<"Enter a binary number: ";
    cin>>binary;

    // Binary number ke total digits count kar rahe hain.
    long long temp = binary;
    int length = 0;

    while(temp != 0){  
        temp = temp/10;  
        length++;
    }

    // Convert binary to decimal using for loop
    for(int i = 0; i<length; i++)
    {
        remainder = binary %10;
        decimal += remainder * pow(2,i);
        binary = binary/10;
    }
    cout<<"Decimal number = "<< decimal;

    return 0;
}