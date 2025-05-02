#include<iostream>
using namespace std;

int calc(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2, result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    result = calc(num1, num2);

    cout << "Result: " << result;

    return 0;
}
