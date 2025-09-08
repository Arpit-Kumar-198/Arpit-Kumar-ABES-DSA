#include<bits/stdc++.h>
using namespace std;
int minMeetingRooms(vector<vector<int>>& intervals){
    vector<int> start, end;
    for (int i = 0; i < intervals.size(); i++)
    {
        start.push_back(intervals[i][0]);
        end.push_back(intervals[i][1]);
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    int room = 0;
    int ans = 0;
    int i = 0, j = 0;
    while (i < start.size() && j < end.size()){
        if(start[i] < end[j]){
            room++;
            ans = max(ans, room);
            i++ ;
        }
        else if(start[i] > end[j]){
            room--;
            j++;
        }
        else{
            i++, j++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> intervals = {{1,7}, {2,10}, {8,19}, {3,12}, {10,20}, {11,20}};
    cout << "Minimum rooms required : " << minMeetingRooms(intervals);
    return 0;
}