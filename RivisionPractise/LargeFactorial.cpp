#include<iostream>
#include<vector>
using namespace std;
void fact(vector<int>& res, int mul, int *p){
    int carry = 0;
    for (int i = 0; i < (*p); i++){
        int x = mul * res[i] + carry;
        res[i] = x % 10;
        carry = x / 10;
    }
    int i = (*p);
    while (carry > 0)
    {
        res[i++] = carry % 10;
        carry /= 10;
        (*p)++;
    }
}
int main(){
    int n;
    cout << "Enter num : ";
    cin >> n;
    vector<int> res(5000, 0);
    res[0] = 1;
    int size = 1;
    int *p = &size;
    for (int mul = 2; mul <= n; mul++)
    {
        fact(res, mul, p);
    }
     for (int i = size-1; i >= 0; i--)
    {
        cout << res[i];
    }
        return 0;
}