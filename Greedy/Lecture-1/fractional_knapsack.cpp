#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>& p1, pair<int,int>& p2){
    // pair first -> value , pair second -> weight
    double r1 = (p1.first * 1.0) / (p1.second * 1.0);
    double r2 = (p2.first * 1.0) / (p2.second * 1.0);
    return r1 > r2;
}
double fractional_knapsack(vector<int>& values, vector<int>& weights, int n, int w){
    double profit = 0;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++){
        arr.push_back({values[i], weights[i]});
    }
    sort(arr.begin(), arr.end(),cmp);
    for (int i = 0; i < arr.size(); i++){
        if(arr[i].second <= w){
            profit += arr[i].first;
            w -= arr[i].second;
        }
        else{
            profit += (arr[i].first * 1.0) / (arr[i].second * 1.0) * w;
            w = 0;
            break;
        }
    }
    return profit;
}
int main(){
    /*
        n items hai har ek ka kuch weight hai and value hai ,
        there is a knapsack (bag thella) , jiski kuch capacity hai 
        is bag k andar hm items ko pura bhi dal skte h frcation me bhi dal skte hai , 

        hme maximum value nikalni hai jo possible hai 
    */

    vector<int> values = {60,100,120};
    vector<int> weights = {10,20,30};
    int w = 50;
    cout << fractional_knapsack(values, weights, values.size(), w);
    return 0;
}