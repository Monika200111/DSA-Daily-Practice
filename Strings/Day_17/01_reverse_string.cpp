// Leetcode 344: Reverse String 
// Time complexity: O(n)
// Space complexity: O1)
// Date: 15-May-2026

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;

        while(i < j){
            swap(s[i], s[j]); // swap characters at both ends
            i++;
            j--;
        }
    }
};
