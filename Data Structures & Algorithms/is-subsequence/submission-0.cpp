//BRUTE FORCE

class Solution {
public:
    bool isSubsequence(string s, string t) {

        for(int i = 0; i < s.size(); i++) {

            bool found = false;

            for(int j = 0; j < t.size(); j++) {   // Starts from 0 every time

                if(s[i] == t[j]) {
                    found = true;
                    break;
                }
            }

            if(!found)
                return false;
        }

        return true;
    }
};