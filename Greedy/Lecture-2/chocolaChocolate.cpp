#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int minCost(int m, int n, vector<int>& x, vector<int>& y){
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    sort(y.begin(), y.end());
    reverse(y.begin(), y.end());

    int cost = 0;
    int i = 0, j = 0;
    int horizontal = 1, vertical = 1;
    while(i < x.size() && j < y.size()){
        if(x[i]>y[j]){
            cost += horizontal * x[i];
            i++, vertical++;
        }
        else{
            cost += vertical * y[j];
            j++, horizontal++;
        }
    }
    while(i < x.size()){
        cost += horizontal * x[i];
        i++, vertical++;
    }
    while(j < y.size()){
        cost += vertical * y[j];
        j++, horizontal++;
    }
    return cost;
}
int main(){
    /*
        a board of M*N . The task is to break it into M*N squares such that cost of breaking is minimum . The cutting cost for each edge will be given for the board in two arrays X[] and Y[]. 
    */

    int m = 6;
    int n = 4;

    vector<int> X = {2, 1, 3, 1, 4};
    vector<int> Y = {4,1,2};
    cout << minCost(m,n,X,Y);
    return 0;
}