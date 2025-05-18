#include <iostream>
using namespace std;

int main() {
    int num;
    int* ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "Value entered: " << *ptr << endl;
    cout << "Address of the variable: " << ptr << endl;

    return 0;
}
