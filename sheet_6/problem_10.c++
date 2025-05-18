#include <iostream>
using namespace std;

int main() {
    const int ROWS = 7;
    const int COLS = 5;
    int array[ROWS][COLS];
    int count = 0;

    cout << "Enter 35 integer values:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Value [" << i << "][" << j << "]: ";
            cin >> array[i][j];

            if (array[i][j] % 3 == 0 || array[i][j] % 7 == 0) {
                count++;
            }
        }
    }

    cout << "\nTotal number of values divisible by 3 or 7: " << count << endl;

    return 0;
}
