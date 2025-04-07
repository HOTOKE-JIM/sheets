#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int product = num1 * num2 * num3;
    int average = (num1 + num2 + num3) / 3;

    cout <<(average !=0 && product % average ==0 ?"The Product of the numbers entered is DIVISIBLE by their average":
        "The Product of the numbers entered is NOT DIVISIBLE by their average");
    return 0;
}

// if (average != 0 && product % average == 0) {
//     cout << "The Product of the numbers entered is DIVISIBLE by their average" << endl;
// } else {
//     cout << "The Product of the numbers entered is NOT DIVISIBLE by their average" << endl;
// }