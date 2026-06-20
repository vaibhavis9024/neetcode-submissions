class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int num: nums){
            m[num]++;
        }
        vector<vector<int>> buckets(nums.size()+1);
        vector<int> ans;
        for(auto&[num, freq] : m){
            buckets[freq].push_back(num);
        }
        for(int i=nums.size(); i>=0 && ans.size()<k; i--){
            for(int num: buckets[i]){
                ans.push_back(num);
                if(ans.size()==k) break;
            }
            
        }
        return ans;
    }
};
