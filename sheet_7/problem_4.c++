#include <iostream>
using namespace std;

int main() {
    int num;
    int* ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "The number entered is: " << *ptr << endl;  

    return 0;
}
