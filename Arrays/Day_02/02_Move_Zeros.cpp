// Leetcode 283: Move Zeros
// Pattern: Two pointers slow fast
// time complexity: O(n)
// Space complexity: O(1)
// Date: 30-April-2026

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
           
        }
    }
};
