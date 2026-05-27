class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int mid=0, high=nums.size()-1;
        while(mid<high+1){
            if(nums[mid]==val && nums[high]!=val){
                swap(nums[mid], nums[high]);
                mid++;
                high--;
            }
            else if(nums[mid]==val && nums[high]==val){
                high--;
            }
            else{
                mid++;
            }
        }
        return high+1;
    }
};