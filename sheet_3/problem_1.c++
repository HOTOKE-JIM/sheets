#include<iostream>
using namespace std;
int main() {
    int num;

   cout << "enter your positive or negative number:";
    cin >> num ;
    cout << (num > 0 ? "The value is a positive number.\n" : (num < 0 ? "The value is a negative number.\n" : "value is 0"));
    return 0;
}
