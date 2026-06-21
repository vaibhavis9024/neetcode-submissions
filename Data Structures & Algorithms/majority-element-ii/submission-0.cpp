class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }
        vector<vector<int>> buckets(nums.size()+1);
        for(auto &[ num, f]:freq){
            buckets[f].push_back(num);
        }
        vector<int> res;
        for(int i=nums.size(); i>0&& res.size()<2; i--){
            if(buckets[i].size()==0) continue;
            else if(i>nums.size()/3){
                for(int j=0; j<buckets[i].size(); j++){
                    res.push_back(buckets[i][j]);
                }
            }
        }
        return res;
    }
};