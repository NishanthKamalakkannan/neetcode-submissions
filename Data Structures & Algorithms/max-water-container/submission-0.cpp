class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maximum_height=0;
        while(left<right){
            int width=right-left;
            int current_height=min(heights[left],heights[right]);
            int current_area=width*current_height;
            maximum_height=max(maximum_height,current_area);
            if(heights[left]<heights[right]){
                left++;
            }

            else{
                right--;
            }
        }
        return maximum_height;
        
    }
};
