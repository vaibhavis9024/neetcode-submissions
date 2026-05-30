class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_p=0, t_p=0;
        while(s_p<s.size() && t_p<t.size()){
            if(s[s_p]==t[t_p]){
                s_p++;
                t_p++;
            }
            else s_p++;
        }
        return t.size()-t_p;
    }
};