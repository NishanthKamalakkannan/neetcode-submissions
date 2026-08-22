class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int current_sum=0;
            for(int j=i;j<nums.size();j++){
                current_sum+=nums[j];
                if(current_sum==goal){
                    count++;
                }
            }


        }
        return count;


        
    }
};