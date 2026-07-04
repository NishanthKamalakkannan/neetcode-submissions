//BRUTE FORCE

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int start = 0;   // Position from where we start searching in t

        for(int i = 0; i < s.size(); i++) {

            bool found = false;

            for(int j = start; j < t.size(); j++) {

                if(s[i] == t[j]) {
                    found = true;
                    start = j + 1;   // Next search starts after this character
                    break;
                }

            }

            if(!found)
                return false;
        }

        return true;
    }
};