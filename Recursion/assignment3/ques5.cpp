/*
     Given an integer array nums that may contain duplicates, return all possible subsets
(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.
Example 1:
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void subsetHelper(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    for (int i = index; i < nums.size(); ++i) {
        // Skip duplicates
        if (i > index && nums[i] == nums[i - 1]) continue;
        
        // Include nums[i] in the subset
        currentSubset.push_back(nums[i]);
        
        // Move to the next element
        subsetHelper(nums, i + 1, currentSubset, result);
        
        // Backtrack by removing the last element
        currentSubset.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    // Sort the array to handle duplicates
    sort(nums.begin(), nums.end());
    
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    // Call the recursive helper function
    subsetHelper(nums, 0, currentSubset, result);
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(nums);
    
    // Print the result
    for(int i = 0; i < result.size(); i++)
    {
        for(int j = 0; j < result[i].size(); j++) cout << result[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
