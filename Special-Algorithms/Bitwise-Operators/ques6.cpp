// given an integer array where exactly 2 element occur once and all other occurs twice , find those element.

// num^num = 0
    // 0^num = num  
    // this property is very usefull
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4};  
    int n = sizeof(arr)/sizeof(arr[0]);

    int xorAll = 0;

    // Step 1: XOR all elements
    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];
    }

    // Step 2: Find rightmost set bit in xorAll
    int setBit = xorAll & (-xorAll);

    // Step 3: Divide elements into two groups
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] & setBit) != 0)
            x ^= arr[i];  // Group with set bit
        else
            y ^= arr[i];  // Group without set bit
    }

    // x and y are the two unique numbers
    cout << "The two unique elements are: " << x << " and " << y << endl;

    return 0;
}
