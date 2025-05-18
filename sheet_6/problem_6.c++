#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int numbers[SIZE];
    int count = 0;

    cout << "Enter 8 integer values:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nValues less than 10:\n";
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] < 10) {
            cout << numbers[i] << " ";
            count++;
        }
    }

    cout << "\n\nNumber of values less than 10: " << count << endl;

    return 0;
}
