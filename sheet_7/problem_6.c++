#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    int* greatest = p1;
    if (*p2 > *greatest) greatest = p2;
    if (*p3 > *greatest) greatest = p3;

    int* smallest = p1;
    if (*p2 < *smallest) smallest = p2;
    if (*p3 < *smallest) smallest = p3;

    cout << "Greatest number is: " << *greatest << endl;
    cout << "Smallest number is: " << *smallest << endl;

    return 0;
}
