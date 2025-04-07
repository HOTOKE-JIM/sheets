#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number:";
    cin >> num ;
    cout << (num % 3 ==0 ? "yes is divisible by 3.\n" : "no isn’t divisible by 3");
return 0;
}
//     // Read input from the user
//     cout << "Enter a number: ";
//     cin >> num;
//     // Check divisibility by 3
//     if (num % 3 == 0) {
//         cout << "yes is divisible by 3" << endl;
//     } else {
//         cout << "no isn’t divisible by 3" << endl;
//     }

//     return 0;
// }
