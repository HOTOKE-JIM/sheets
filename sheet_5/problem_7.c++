#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
    } else {
        cout << "Fibonacci number at position " << number << " is: " << fib(number) << endl;
    }

    return 0;
}
