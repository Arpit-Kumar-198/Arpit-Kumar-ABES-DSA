#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Sort 0s, 1s and 2s   (leetcode 75)
    vector<int> nums;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elemenst : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
        int no0 = 0;
        int no1 = 0;
        int no2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0) no0++;
            else if(nums[i] == 1) no1++;
            else no2++;
        }
        for(int i = 0; i < n; i++)
        {
            if(i <  no0) nums[i] = 0;
            else if(i < no0+no1) nums[i] = 1;
            else nums[i] = 2;
        }
        for(int i = 0; i < n; i++)
        {
           cout<<nums[i]<<" ";
        }

    }