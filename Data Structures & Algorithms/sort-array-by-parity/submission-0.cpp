class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int r=0;
        for(int l=0;l<nums.size();l++){
            if(nums[l]%2==0){
                swap(nums[l],nums[r]);
                r++;
            }
        }
        return nums;
        
    }
};