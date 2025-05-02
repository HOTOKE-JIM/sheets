#include <iostream>
using namespace std;

int powFun(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int num1, num2;

    cout << "Enter base (num1): ";
    cin >> num1;

    cout << "Enter exponent (num2, must be non-negative): ";
    cin >> num2;

    if (num2 < 0) {
        cout << "This function only supports non-negative exponents." << endl;
    } else {
        int result = powFun(num1, num2);
        cout << num1 << " raised to the power of " << num2 << " is: " << result << endl;
    }

    return 0;
}
