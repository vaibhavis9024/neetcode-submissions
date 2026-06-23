class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> map;
        map[0]=1;
        int prefix_sum=0;
        int res=0;
        for(int num:nums){
            prefix_sum+=num;
            if(map.contains(prefix_sum-goal)) res+=map[prefix_sum-goal];
            map[prefix_sum]++;
        }
        return res;
    }
};