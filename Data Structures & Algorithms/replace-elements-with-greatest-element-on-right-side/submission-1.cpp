class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ptr=arr.size()-2;
        vector<int> ans(arr.size());
        int greatest=arr[arr.size()-1];
        while(ptr>=0){
            greatest=arr[ptr+1]>greatest?arr[ptr+1]:greatest;
            ans[ptr]=greatest;
            ptr--;
        }
        ans[arr.size()-1]=-1;
        return ans;
    }
};