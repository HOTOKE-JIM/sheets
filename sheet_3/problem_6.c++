#include <iostream>
using namespace std;
int main() {
    int length;

   
   cout << "Please enter length of square: ";
   cin >> length;

    int area = length * length;
    int perimeter = 4 * length;

    cout <<(area % perimeter == 0 ?"Is area divided by perimeter: yes":"Is area divided by perimeter: no" );
    return 0;
}
    // // Check divisibility
    // if (area % perimeter == 0) {
    //     std::cout << "Is area divided by perimeter: yes" << std::endl;
    // } else {
    //     std::cout << "Is area divided by perimeter: no" << std::endl;
    // }