#include <iostream>
#include <algorithm>  
using namespace std;
int main() {
    int a, b, c;
  
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max_val = max({a, b, c});
    int min_val = min({a, b, c});

    cout << "The maximum value is " << max_val << " and the minimum value is " << min_val;
    
    return 0;
}
