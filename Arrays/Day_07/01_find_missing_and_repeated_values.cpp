// Leetcode 2965: Find missing and repeated values
// Time complexity: O(n^2)
// Space complexity: O(n^2)
// Date: 5-May-2026

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n = grid.size();
        int total = n*n;
    
        for(int i=0; i<n; i++){
            for(int j =0; j<n; j++){
                if(s.find(grid[i][j]) != s.end()){
                    ans.push_back(grid[i][j]);
                }
                s.insert(grid[i][j]);
            }
        }
        for(int i = 1; i<=total; i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }
        return ans;  
    }
};
