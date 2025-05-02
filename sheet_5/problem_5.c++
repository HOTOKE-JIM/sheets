#include <iostream>
using namespace std;

int calc(int nums[], int size) {
    int max = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

int main() {
    int nums[10] = {1, 2, 3, 4, 6, 7, 8, -1, 2, 9};

    int maximum = calc(nums, 10);

    cout << "The maximum number is: " << maximum << endl;

    return 0;
}
