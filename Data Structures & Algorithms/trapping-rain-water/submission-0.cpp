class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        vector<int>rightmax(n);
         
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax=max(leftmax[i-1],height[i]);

        }
        rightmax[i-1]=height[i-1];
        for(int i=i-2;i>=n;i++){
            rightmax=max(rightmax[i+1],height[i]);

        }
        int water=0;
        for(int i=0;i<n;i++){
            water+=min(leftmax[i],rightmax[i])-height[i]
        }
        return water;

        
    }
};
