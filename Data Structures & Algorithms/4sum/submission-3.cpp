class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int p, q;
        long long sum;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<nums.size()-2; j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                p=j+1;
                q=nums.size()-1;
                while(p<q){
                    sum=(long long)nums[i]+nums[j]+nums[p]+nums[q];
                    if(sum==target){
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        while(p<q && nums[p]==nums[p+1]) p++;
                        while(p<q && nums[q-1]==nums[q]) q--;
                        p++;
                        q--;
                    }
                    else if(sum<target){
                        p++;
                    }
                    else if(sum>target){
                        q--;
                    }
                }
            }
        }
        return ans;
    }
};