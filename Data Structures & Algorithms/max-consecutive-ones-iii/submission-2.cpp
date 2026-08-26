class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
         
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==0){
                    count++;
                }
                if(count<=k){
                    maxlen=max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
        
    }
};