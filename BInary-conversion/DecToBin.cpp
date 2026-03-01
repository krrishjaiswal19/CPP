#include <iostream>
using namespace std;

int main() {
    int decimal;
    long long binary = 0;
    int remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    // For loop to convert decimal to binary
    for (int i = 1; decimal > 0; i *= 10) {
        remainder = decimal % 2;          // Get remainder (0 or 1)
        binary += remainder * i;          // Build binary number
        decimal /= 2;                     // Reduce number
    }

    cout << "Binary number = " << binary;

    return 0;
}