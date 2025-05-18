#include <iostream>
using namespace std;

int main() {
    int num;
    int* ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "Value entered: " << num << endl;
    cout << "Address of variable (value of pointer): " << ptr << endl;
    cout << "Address of the pointer itself: " << &ptr << endl;

    return 0;
}
