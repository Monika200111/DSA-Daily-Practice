// Leetcode 26: Remove duplicates
// Pattern: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
// Date: 29-April-2026

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        int n = nums.size();
        int i =0;
        for(int j =1; j<n; j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
