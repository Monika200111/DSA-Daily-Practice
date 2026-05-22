// Leetcode 977: Squares of a sorted array
// Time complexity: O(n)
// Space complexity: O(1)
// Using Two pointers
// Date: 22-May-2026

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0, right = n-1;
        int idx = n-1;
        while(left<=right){
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if(leftSq > rightSq){
                ans[idx--] = leftSq;
                left++;
            }
            else{
                ans[idx--] = rightSq;
                right--;
            }

        }
        return ans;
    }
};
