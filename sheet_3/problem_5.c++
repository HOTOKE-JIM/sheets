#include <iostream>
using namespace std;

int main() {
    int l1, l2, l3;

    cout << "Enter the three sides of the triangle: ";
    cin >> l1 >> l2 >> l3;

    if (l1 == l2 && l2 == l3) {
        cout << "triangle is equilateral" << endl;
    } else if (l1 == l2 || l2 == l3 || l1 == l3) {
        cout << "triangle is Isosceles" << endl;
    } else {
        cout << "triangle is different" << endl;
    }

    return 0;
}
