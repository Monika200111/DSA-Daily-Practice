// Time complexity: O(n^2)
// Space complexity: O(1)
// If n>10^3 There will be TLE

vector<int> sortArray(vector<int>& nums) {
       for(int i=0; i<nums.size()-1; i++){
            bool swapped = false;
            for(int j =0; j<nums.size()-i-1; j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    swapped = true;
                }
            
            }
            if(swapped == false){
                break;
            }
        }
        return nums;
    }
