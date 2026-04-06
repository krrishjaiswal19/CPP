#include <iostream>
using namespace std;

int length(char *str) {
    int count = 0;
    while (*(str + count) != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[] = "Hello";
    cout << "Length: " << length(str);
    return 0;
}