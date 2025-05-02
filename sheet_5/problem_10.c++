#include <iostream>
using namespace std;

void multTable(int number) {
    cout << "Multiplication Table for " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int num;

    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    multTable(num);

    return 0;
}
