// Leetcode 18: 4Sum
// Time complexity: O(n^3)
// Space complexity: O(1) Auxiliary space and for output spcae complexity is O(n)
// Using sort and 4 pointers
// Date: 07-May-2026

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int a =0; a<n; a++){
            if(a>0 && nums[a] == nums[a-1]){
                continue;
            }
            for(int b = a+1; b<n; b++ ){
                if(b>a+1 && nums[b] == nums[b-1]){
                    continue;
                }
                int l = b+1;
                int r = n-1;
                while(l<r){
                    long sum = (long)nums[a]+nums[b]+nums[l]+nums[r];
                    if(sum == target){
                        ans.push_back({nums[a], nums[b], nums[l], nums[r]});

                        while(l<r && nums[l] == nums[l+1]){
                            l++;
                        }
                        while(l<r && nums[r] == nums[r-1]){
                            r--;
                        }
                        l++;
                        r--;
                    }
                    else if(sum > target){
                        r--;
                    }
                    else{
                        l++;
                    }
                }

            }
        }
        return ans;
        
    }
};
