// Leetcode 2124: Check if all A's appears before all B's 
// Time complexity: O(n)
// Space complexity: O(1)
// Date: 21-May-2026


class Solution {
public:
    bool checkString(string s) {
        bool SeenB = false;
        for(int i =0; i<s.length(); i++){
            if(s[i] == 'b'){
                SeenB = true;

            }
            else if(s[i] == 'a' && SeenB){
                return false;
            }
        }
        return true;
    }
};
