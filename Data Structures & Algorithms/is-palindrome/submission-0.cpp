class Solution {
public:
    bool isPalindrome(string s) {
        // s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int m=0;
        for( char &l : s){
            s[m]=tolower(l);
            m++;
        }
        int i=0, j=s.size()-1;
        while(i<j){
            if(isalnum(s[i])){
                if(isalnum(s[j])){
                    if(s[i]==s[j]){
                        i++;
                        j--;
                    }
                    else return false;
                }
                else j--;
            }
            else i++;
        }
        return true;
    }
};