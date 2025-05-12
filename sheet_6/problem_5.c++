#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 5;
    int arr[ROWS][COLS];
    int evenCount = 0;

    cout << "Enter 15 integers for a 3x5 array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];

            if (arr[i][j] % 2 == 0) {
                evenCount++;
            }
        }
    }

    cout << "\nTotal even numbers in the array: " << evenCount << endl;

    return 0;
}
