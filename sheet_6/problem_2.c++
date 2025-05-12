#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter five integers:\n";

    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "\nThe elements you entered are:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
