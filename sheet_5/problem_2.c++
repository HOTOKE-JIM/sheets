#include<iostream>
using namespace std;

float calculateArea(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    float radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = calculateArea(radius);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
