/*
    You are given an array with unique elements of stalls[], which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. Your task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

Examples :

Input: stalls[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows, in this case, is 3, which also is the largest among all possible ways.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int> stalls, int k, int minDist) {
    int cow = 1;  
    int lastPos = stalls[0];
    
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= minDist) {
            cow++;  
            lastPos = stalls[i];  
            if (cow == k) return true;  
        }
    }
    return false;  
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());  

    int lo = 1;  
    int hi = stalls.back() - stalls.front();  
    int maxDist = 0;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  

        if (check(stalls, cows, mid)) {
            maxDist = mid;  
            lo = mid + 1; 
        } else {
            hi = mid - 1;  
        }
    }

    return maxDist;
}

int main() {
    int n;
    cin >> n;
    vector<int> stalls(n);
    for(int i = 0; i < n; i++) cin >> stalls[i];
    int k;
    cin >> k;

    int maxDistance = aggressiveCows(stalls, k);
    cout << maxDistance;

    return 0;
}
