#include <iostream>
using namespace std;

int main() {
    int num;
    int* ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "Value stored at the address of pointer (*(&ptr)): " << *(&ptr) << endl;

    return 0;
}
