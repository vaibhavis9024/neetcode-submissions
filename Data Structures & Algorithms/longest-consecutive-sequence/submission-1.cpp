class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest_streak=1;
        if(!nums.size()) return 0;
        for(int num:s){
            if(!(s.contains(num-1))){
                int curr_num=num;
                int curr_streak=1;
                while(s.contains(curr_num+1)){
                    curr_num++;
                    curr_streak++;
                }
                longest_streak=max(longest_streak, curr_streak);
            } 
        }
        return longest_streak;
    }
};
