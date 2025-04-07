#include<iostream>
using namespace std;
int main (){
    int i = 10;
    int sum = 0;

    while (i <= 20) {
        sum += i * i;  // Square of i and add to sum
        i++;
    }
    cout << "Sum of squares from 10 to 20 is: " << sum << endl;
    return 0;
}