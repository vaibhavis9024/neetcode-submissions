class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write=1;
        for(int move=1; move<nums.size(); move++){
            if(nums[move]==nums[move-1]){
            }
            else{
                nums[write]=nums[move];
                write++;
            }
        }
        return write;
    }
};