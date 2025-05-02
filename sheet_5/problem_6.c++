#include <iostream>
#include <cmath>
using namespace std;

float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;
    
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;
    
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;
    
    float result = distance(x1, y1, x2, y2);
    cout << "Distance between points: " << result << endl;

    return 0;
}
