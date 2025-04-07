#include <iostream>
#include <iomanip> // for setw
using namespace std;

int main() {
    // headers
    cout << setw(10) << "X" 
         << setw(10) << "X^2" 
         << setw(10) << "X^3+2" << endl;

    for (int x = 1; x <= 4; x++) {
        int x2 = x * x;
        int x3_plus_2 = (x * x * x) + 2;

        cout << setw(10) << x 
             << setw(10) << x2 
             << setw(10) << x3_plus_2 << endl;
    }
    return 0;
}

