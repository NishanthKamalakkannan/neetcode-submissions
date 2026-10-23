class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                vec.push_back(nums[i]);
            }

        }
        while(vec.size()<nums.size()){
            vec.push_back(0);
        }
        for(int i=0;i<vec.size();i++){
            nums[i]=vec[i];
        }


        
    }
};