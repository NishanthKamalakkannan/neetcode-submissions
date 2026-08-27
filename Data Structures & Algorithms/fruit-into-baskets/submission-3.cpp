class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k=2;
        int maxlen=0;
        for(int left=0;left<fruits.size();left++){
            unordered_set<int>stt;

            for(int right=left;right<fruits.size();right++){
                stt.insert(fruits[right]);
                if(stt.size()<=k){
                    maxlen=max(maxlen,right-left+1);
                }
                
            }
        }
        return maxlen;
        
    }
};