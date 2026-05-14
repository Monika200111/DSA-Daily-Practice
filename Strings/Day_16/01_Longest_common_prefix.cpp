// Leetcode 14: Longest common prefix
// Time complexity: O(s) where s is sum of all characters
// Space complexity: O(1)
// Using Prefix Shrinking
// Date : 14-May-2026

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

        string prefix = strs[0];
        
        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.length()-1);
                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};
