class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        // Traverse each character of the first string
        for (int i = 0; i < strs[0].size(); i++) {

            char current = strs[0][i];

            // Compare with every other string
            for (int j = 1; j < strs.size(); j++) {

                // If current string is shorter OR characters don't match
                if (i >= strs[j].size() || strs[j][i] != current) {
                    return ans;
                }
            }

            // If every string has the same character, add it
            ans += current;
        }

        return ans;
    }
};