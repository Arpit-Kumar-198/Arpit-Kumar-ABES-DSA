#include<bits/stdc++.h>
using namespace std;
/*
    given an array of meetings time intervals where intervals[i] = [start,end], determine a person can attend all the meetings or not ?
    [[0,30],[5,10],[15,20]]  => YES
    [[7,10],[2,4]]  => NO
 */
bool meetingRooms(vector<vector<int>>& intervals){
    if(intervals.size() <= 1)
        return true;
    vector<int> start, end;
    for (int i = 0; i < intervals.size(); i++)
    {
        start.push_back(intervals[i][0]);
        end.push_back(intervals[i][1]);
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    bool flag = true;
    int i = 1, j = 0;
    while (i < start.size() && j < end.size()){
        if(start[i] < end[j]){
            return false;
        }
        else {
            i++;
            j++;
        }
        
    }
    return flag;
}
int main(){
    vector<vector<int>> intervals = {{7,10},{2,4}};
    if (meetingRooms(intervals))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}