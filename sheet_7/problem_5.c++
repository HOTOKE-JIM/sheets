#include <iostream>
using namespace std;

void displayNumber(int* ptr) {
    cout << "Number is: " << *ptr << endl;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    displayNumber(&num);

    return 0;
}
