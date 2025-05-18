#include <iostream>
using namespace std;

int main() {
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    cout << "Enter 30 integer values:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Value [" << i << "][" << j << "]: ";
            cin >> array[i][j];

            if (array[i][j] > maxVal)
                maxVal = array[i][j];

            if (array[i][j] < minVal)
                minVal = array[i][j];
        }
    }

    cout << "\nMaximum value in the array: " << maxVal << endl;
    cout << "Minimum value in the array: " << minVal << endl;

    return 0;
}
