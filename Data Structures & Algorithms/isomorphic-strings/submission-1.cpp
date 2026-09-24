class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,char>stot;
        unordered_map<char,char>ttos;

        for(int i=0;i<s.length();i++){
            char a=s[i];
            char b=t[i];
            if(stot.count(a)&&stot[a]!=b){
                return false;
            }
            if(ttos.count(b)&&ttos[b]!=a){
                return false;
            }
            stot[a]=b;
            ttos[b]=a;

        }
        return true;
        
    }
};