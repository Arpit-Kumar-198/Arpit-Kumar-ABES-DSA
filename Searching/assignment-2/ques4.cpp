/*
    There is an integer array nums sorted in non-decreasing order (not necessarily with
distinct values).
Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k
< nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
[0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
[4,5,6,6,7,0,1,2,4,4] .
Given the array nums after the rotation and an integer target , return true if target is in
nums , or false if it is not in nums .
You must decrease the overall operation steps as much as possible.
*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            // If the target is found
            if (nums[mid] == target) {
                return true;
            }
            
            // Check if the array has duplicates at lo, mid, and hi
            if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
                lo++;
                hi--;
            } 
            // Left half is sorted
            else if (nums[lo] <= nums[mid]) {
                if (nums[lo] <= target && target < nums[mid]) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[hi]) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }
        return false;
    }
};
