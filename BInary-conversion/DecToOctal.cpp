#include <iostream>
using namespace std;

int main() {
    int decimal;
    long long octal = 0;
    int remainder;

    cout << "Enter decimal number: ";
    cin >> decimal;

    for (int i = 1; decimal > 0; i *= 10) {
        remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
    }

    cout << "Octal number = " << octal;

    return 0;
}