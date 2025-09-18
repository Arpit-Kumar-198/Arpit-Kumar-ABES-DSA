#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*
        Asen and Boyan playing a game , they have n coins , one can pick either 1 , k or l coins from the n coins , the winner will be the one who will pick last coin. If Asen starts the game who will be the winner ?

        Input : k, l, m where m is an array of number of coins .
                n1, n2, n3, ... nm
        example : 2 3 5
                  3 12 113 25714 88888

        1 < k < l < 10
        3 < m < 50
        1 <= Ni <= 1000000
    */

    int k, l, m;
    cin >> k >> l >> m;
    int n[m];
    for (int i = 0; i < m; i++)
        cin >> n[i];


    vector<int> dp(1000000+1,-1);

    dp[1] = 1;
    dp[k] = 1;
    dp[l] = 1;

    for (int i = 2; i <= dp.size(); i++){
        int a, b, c;
        if(i-1 >= 0 && i-1 < dp.size())
            a = dp[i - 1];
        else
            a = 1;

        if (i - k >= 0 && i - k < dp.size())
            b = dp[i - k];
        else
            b = 1;

        if (i - l >= 0 && i - l < dp.size())
            c = dp[i - l];
        else
            c = 1;
            
        if (dp[i] == -1)
            dp[i] = !(a && b && c);
    }

    for (int i = 0; i < m; i++){
        if(dp[n[i]] == 1)
            cout << 'A';
        else
            cout << 'B';
    }
        return 0;
}