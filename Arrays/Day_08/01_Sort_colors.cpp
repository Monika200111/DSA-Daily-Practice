// Leetcode 75: Sort Colors / In place sort
// Time cmplexity: O(n)
// Space complexity: O(1)
// Using Dutch flag:- means i ahve used three pointers low for 0's area high for 2's area and mid to check current element
// Date: 06-May-2026

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
