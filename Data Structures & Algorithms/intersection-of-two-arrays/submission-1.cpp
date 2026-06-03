class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hashSet2;
        unordered_set<int> hashSet (nums1.begin(), nums1.end());

        for(int num:nums2)
            if(hashSet.contains(num)) hashSet2.insert(num);
        return vector<int> (hashSet2.begin(), hashSet2.end());
    }
};