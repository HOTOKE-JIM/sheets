#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int sum = 0;
    float average;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    average = static_cast<float>(sum) / SIZE;

    cout << "\nSum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    return 0;
}
