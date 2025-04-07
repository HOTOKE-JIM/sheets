#include <iostream>
using namespace std;

int main() {
    int number[5];
    int sum = 0;
    
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> number[i];
        sum += number[i];
    }

    double average = static_cast<double>(sum) / 5;
    cout << "The average is: " << average << "\n";
    
    if (static_cast<int>(average) % 2 == 0) {
        cout << "The average is even.\n";
    } else {
        cout << "The average is odd.\n";
    }
    
    return 0;
}
