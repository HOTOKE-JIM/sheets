#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int N;
    cout << "Enter a non-negative integer: ";
    cin >> N;
    unsigned long long fact = factorial(N);

        cout << "Factorial of " << N << " is: " << fact << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

int fact (int N){
    if (N == 0 || N ==1){
        return 1;
    }
    return N * fact(N-1);
}
int main (){
    cout<<fact(6);
    return 0;
}