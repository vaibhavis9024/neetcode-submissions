class Solution {
public:
    bool isPal(string s, int start, int end){
        while(start<end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        bool skip_made=false;
        int start=0, end=s.size()-1;
        while(start<end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else if(s[start]!=s[end] && !skip_made){
                skip_made=true;
                return isPal(s, start+1, end) || isPal(s, start, end-1);
            }
            else return false;
        }
        return true;
    }
};