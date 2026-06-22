class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0]=1;
        int prefix_sum=0;
        int result=0;
        for(int num: nums){
            prefix_sum+=num;
            if(map.contains(prefix_sum-k)) result+=map[prefix_sum-k];
            map[prefix_sum]++;
        }
        return result;
    }
};