class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;

            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if(islower(s[left])!=islower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};