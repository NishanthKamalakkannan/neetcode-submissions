class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> prevmap;
        for(int i = 0 ; i < nums.size() ; i++){
            int diff = target - nums[i];
            if (prevmap.find(diff) != prevmap.end()){
                return {prevmap[diff],i};

            }
            prevmap.insert({nums[i],i});

        }
        return{-1,-1};

        
    }
};
