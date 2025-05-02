
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void display() {
    cout << "Prime numbers from 2 to 50 are:\n";
    for (int i = 2; i <= 50; ++i) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    display();
    return 0;
}
