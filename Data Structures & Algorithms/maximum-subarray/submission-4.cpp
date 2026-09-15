class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int currentsum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(currentsum+nums[i]>nums[i]){
                currentsum+=nums[i];

            }
            else{
                currentsum=nums[i];
            }
            if(currentsum>maxsum){
                maxsum=currentsum;
            }
        }
        return maxsum;

        
    }
};