class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left=0;
        int right=0;
        int minlen=INT_MAX;
        int white=0;
        while(right<blocks.size()){
            if(blocks[right]=='W'){
                white++;

            }
            if(right-left+1==k){
                minlen=min(minlen,white);
                if(blocks[left]=='W'){
                    white--;

                }
                left++;

            }
            right++;


        }
        return minlen;

        
    }
};