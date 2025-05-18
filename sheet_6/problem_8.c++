#include <iostream>
using namespace std;

int main() {
    const int ROWS = 4;
    const int COLS = 5;
    int values[ROWS][COLS];
    int sum = 0;
    int count = 0;

    cout << "Enter 20 integer values:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Value [" << i << "][" << j << "]: ";
            cin >> values[i][j];
            if (values[i][j] < 9) {
                sum += values[i][j];
                count++;
            }
        }
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "\nAverage of values less than 9: " << average << endl;
    } else {
        cout << "\nNo values less than 9 were entered.\n";
    }

    return 0;
}
