class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write=2;
        for(int read=2; read<nums.size(); read++){
            if(nums[read]!=nums[write-2]){
                nums[write]=nums[read];
                write++;
            }
        }
        return write;
    }
};