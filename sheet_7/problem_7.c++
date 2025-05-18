#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "Value of num1: " << num1 << endl;
    cout << "Value of num2: " << num2 << endl;
    cout << "Value pointed to by ptr1 (*ptr1): " << *ptr1 << endl;
    cout << "Value pointed to by ptr2 (*ptr2): " << *ptr2 << endl;

    return 0;
}
