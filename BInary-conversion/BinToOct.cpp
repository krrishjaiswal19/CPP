#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, remainder;

    cout << "Enter binary number: ";
    cin >> binary;

    // Binary → Decimal
    for (int i = 0; binary > 0; i++) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
    }

    // Decimal → Octal
    long long octal = 0;
    for (int i = 1; decimal > 0; i *= 10) {
        remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
    }

    cout << "Octal number = " << octal;

    return 0;
}