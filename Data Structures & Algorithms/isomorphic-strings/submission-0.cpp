class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;

        }
        for(int i=0;i<s.length();i++){
            for(int j=0;j<i;j++){
                if(s[j]==s[i] && t[j]!=t[i]){
                    return false;
                }
                if(t[j]==t[i]&&s[j]!=s[i]){
                    return false;
                }

            }
        }
        return true;
        
    }
};