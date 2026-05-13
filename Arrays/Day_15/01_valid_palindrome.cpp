// Leetcode 125: Valid palindrome
// Time complexity: O(n)
// Space complexity: O(1)
// Using two pointers
// Date: 13-May-2026

class Solution {
    // functions made by me 
private:

    // check if a given character is valid or not is space or any other special character than ignore
    bool valid(char ch){
        if((ch >= 'A' && ch<='Z') || (ch>= 'a' && ch<= 'z') || (ch>= '0' && ch<= '9')){
            return 1;
        }
        return 0;
    }

    // convert character to lowercase
    char toLowerCase(char ch){
        if((ch>= 'a' && ch<= 'z') || (ch>= '0' && ch<='9')){
            return ch;
        }
        else{
            ch = ch - 'A' + 'a';
        }
        return ch;
    }
    
    // check a string is palindrome or not
    bool checkPalindrome(string s){
        int i =0; 
        int j = s.length()-1;

        while(i<j){
            if(s[i] != s[j]){
                return 0;
            }
            else{
                i++;
                j--;
            }  
        }
        return 1;
    }



public:
    bool isPalindrome(string s) {

        // clear spaces
        string temp = "";
        for(int i =0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        // convert to lower case
        for(int i =0; i<temp.length(); i++){
            temp[i] = toLowerCase(temp[i]);
        }
        
        // check for palindrome
        if(checkPalindrome(temp)){
            return 1;
        }
        return 0;
    }
};
