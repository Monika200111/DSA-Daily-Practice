// Leetcode 56: Merge Intervals
// Time complexity: O(n)
// Space Complexity: O(1) auxiliary space and O(n) for space complexity
// using greedy+ Sorting and use of ans.back() this is the most smart move
// Date: 09-May-2026

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        int i = 1;
        ans.push_back(intervals[0]);
        
        for(int i =1; i<n; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(ans.back()[1] >= start){
                ans.back()[1] = max(end, ans.back()[1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
        
    }
};
