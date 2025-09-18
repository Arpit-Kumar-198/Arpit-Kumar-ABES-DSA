
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << (arr + 0) << endl
         << (arr + 1) << endl
         << (arr + 2) << endl;

    cout << endl;
    cout << (arr + 0) << endl
         << &(arr[0]) << endl;

    cout << endl;
    cout << (0 [arr]) << endl
         << &(0 [arr]) << endl;
}
