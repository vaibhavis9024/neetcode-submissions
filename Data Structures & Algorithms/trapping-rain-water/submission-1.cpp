class Solution {
public:
    int trap(vector<int>& height) {
        int total_water=0;
        vector<int> prefix;
        vector<int> suffix;
        int max_prefix=height[0];
        prefix.push_back(0);
        for(int i=1; i<height.size(); i++){
            prefix.push_back(max(height[i-1], max_prefix));
            max_prefix=max(height[i-1], max_prefix);
        }
        int max_suffix=height[height.size()-1];
        suffix.push_back(0);
        for(int i=height.size()-2; i>=0; i--){
            suffix.insert(suffix.begin(),(max(height[i+1], max_suffix)));
            max_suffix=max(height[i+1], max_suffix);
        }

        for(int i=0; i<height.size(); i++){
            total_water+=max(min(prefix[i], suffix[i])-height[i], 0);
        }
        return total_water;
    }
};
