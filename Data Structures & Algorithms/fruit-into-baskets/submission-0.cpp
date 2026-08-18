class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n = arr.size();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            set<int> st;
            for (int j = i; j < n; j++) {
                st.insert(arr[j]);

                if (st.size() <= 2) {
                    maxLen = max(maxLen, j - i + 1);
                } else {
                    break;  
                }
            }
        }

        return maxLen;
    }
};