class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int low=0, high=low+k-1;
        int Max=nums[0];
        vector<int> res;
        unordered_set<int> window;
        if(nums.size()==1) return {nums[0]};
        window.insert(nums[0]);
        for(int i=1; i<k; i++){
            Max=max(Max, nums[i]);
            window.insert(nums[i]);
        }
        res.push_back(Max);
        while(high+1<nums.size()){
            window.erase(nums[low]);
            window.insert(nums[high+1]);
            high++;
            low++;
            if(window.contains(Max) && nums[high]>Max){
                Max=nums[high];
            }
            else if(!(window.contains(Max))){
                Max=nums[low];
                for(int i=low; i<high; i++){
                    Max=max(Max,nums[i+1]);
                }
            }
            res.push_back(Max); 
        }
        return res;
    }
};
