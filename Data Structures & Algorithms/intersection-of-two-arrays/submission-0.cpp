class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hashSet2;
        unordered_set<int> hashSet;
        for(int i=0; i<nums1.size(); i++)
            hashSet.insert(nums1[i]);
        for(int i=0; i<nums2.size(); i++){
            if(hashSet.contains(nums2[i])) hashSet2.insert(nums2[i]);
        }
        vector<int> c(hashSet2.begin(), hashSet2.end());
        return c;
    }
};