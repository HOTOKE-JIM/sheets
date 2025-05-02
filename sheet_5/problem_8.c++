#include <iostream>
using namespace std;


int sumEven() {
    int num, sum = 0;

    cout << "Enter numbers between 1 and 15 (enter 0 to stop):" << endl;

    while (true) {
        cin >> num;

        if (num == 0)
            break;

        if (num >= 1 && num <= 15 && num % 2 == 0) {
            sum += num;
        }
    }

    return sum;
}

int main() {
    int result = sumEven();
    cout << "Sum of even numbers between 1 and 15: " << result << endl;
    return 0;
}
