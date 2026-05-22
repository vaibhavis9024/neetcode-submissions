class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int p, q=nums.size()-1;
        int target;
        vector<vector<int>> ans;
        for (int i=0; i<nums.size()-2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            p=i+1;
            q=nums.size()-1;
            target=-1*nums[i];
            while(p<q){
                if(nums[p]+nums[q]==target){
                    ans.push_back({nums[i], nums[p], nums[q]});
                    while (p < q && nums[p] == nums[p+1]) p++;
                    while (p < q && nums[q] == nums[q-1]) q--;
                    p++; q--;
                }
                else if(nums[p]+nums[q]>target){
                    q--;
                }
                else p++;
            }
        }
        return ans;
    }
};
