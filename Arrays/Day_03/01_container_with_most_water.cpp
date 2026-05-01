// Leetcode problem 11: Container with most water
// Time complexity: O(n)
// Space complexity: O(1)
// Using two pointers
// Date: 1-May-2026

class Solution {
public:
    int maxArea(vector<int>& height) {
      int ans = 0;
      int s =0, e= height.size()-1;
      while(s<e){
          int w = e-s;
          int h = min(height[s], height[e]);

          int area = h*w;
          ans = max(area, ans);
            
          if(height[s] < height[e]){
              s++;
          }
          else{
              e--;
          }
      }
      return ans;
  }
};
