class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_p=0, t_p=0;
        while(s_p<s.size() && t_p<t.size()){
            if(s[s_p]==t[t_p]){
                s_p++;
                t_p++;
            }
            else t_p++;
        }
        if(s_p==s.size()) return true;
        else return false;
    }
};