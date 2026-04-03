#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> *(arr + i);  // pointer use
    }

    cout << "Array elements:\n";
    for(int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    // memory free
    delete[] arr;

    return 0;
}