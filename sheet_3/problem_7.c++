#include <iostream>
using namespace std;
int main() {
    int width, height;

  
cout << "Please enter base of rectangle: ";
cin >> width;

cout << "Please enter height of rectangle: ";
cin >> height;

    if (width % height == 0) {
        int area = width * height;
        cout << "Area=" << area << endl;
    } else {
        int perimeter = 2 * (width + height);
        cout << "Perimeter=" << perimeter << endl;
    }

    return 0;
}
