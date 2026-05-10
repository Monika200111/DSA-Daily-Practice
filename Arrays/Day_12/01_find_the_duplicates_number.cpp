// Leetcode 287: find the duplicate number 
// Time complexity: O(n)
// Space complexity: O(1)
// Using Floyd's tortoise/Cycle detection 
// Date: 10-May-2026

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Cycle me milao
        do {
            slow = nums[slow]; // 1 step
            fast = nums[nums[fast]]; // 2 step
        } while (slow!= fast);

        // Phase 2: Cycle ka entry point = duplicate
        slow = nums[0];
        while (slow!= fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
