#include <bits/stdc++.h>
using namespace std;

void fact(vector<int>& factorial, int& size, int mul)
{ 
    int carry = 0;
   
    for (int i = 0; i < size; i++)
    {
        int res = factorial[i] * mul + carry;
        factorial[i] = res % 10;  // Store the current digit
        carry = res / 10;        // Update the carry
    }
    
    while (carry > 0)
    {
        factorial[size] = carry % 10;  // Add new digits from carry
        size++;
        carry /= 10;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> factorial(5000, 0);
        factorial[0] = 1;  // Initialize with 1
        int size = 1;      // Number of digits in the factorial
        
        for (int mul = 2; mul <= n; mul++)
        {
            fact(factorial, size, mul);
        }
       
        // Print the factorial in reverse order
        for (int i = size - 1; i >= 0; i--)
        {
            cout << factorial[i];
        }
        cout << endl;
    }
    return 0;
}
