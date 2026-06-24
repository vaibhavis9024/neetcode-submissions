class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int prefix_sum=0;
        map[0]=-1;
        for(int i=0; i<nums.size(); i++){
            prefix_sum+=nums[i];
            if(map.contains(prefix_sum%k)){
                if(i-map[prefix_sum%k]>1) 
                    return true; 
            }
            else map[prefix_sum%k]=i;
            

        }
        return false;
    }
};