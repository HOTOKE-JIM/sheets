#include <iostream>
using namespace std;

int main() {
    const int SIZE = 15;
    int numbers[SIZE];
    int subtractionResult = 0;
    bool first = true;

    cout << "Enter 15 integer values:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == 20) {
            if (first) {
                subtractionResult = numbers[i];
                first = false;
            } else {
                subtractionResult -= numbers[i];
            }
        }
    }

    if (first) {
        cout << "\nNo number equal to 20 was found.\n";
    } else {
        cout << "\nSubtraction result of numbers equal to 20: " << subtractionResult << endl;
    }

    return 0;
}
