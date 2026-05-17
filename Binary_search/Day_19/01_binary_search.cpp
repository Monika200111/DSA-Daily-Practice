// Leetcode 704: Binary search 
// Time complexity: O(n)
// Space complexity: O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e - s) / 2;
        while(s<=e){
            if(target == nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
};
