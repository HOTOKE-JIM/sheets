#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE];
    int arr2[SIZE];

    cout << "Enter five elements for arr1:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr1[i];
    }

    copy(arr1, arr1 + SIZE, arr2);

    cout << "\nThe elements in arr2 are:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": " << arr2[i] << endl;
    }

    return 0;
}
