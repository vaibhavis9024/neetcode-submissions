class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ptr=arr.size()-2;
        int save=arr[ptr+1];
        vector<int> ans(arr.size());
        int greatest=arr[arr.size()-1];
        while(ptr>=0){
            greatest=save>greatest?save:greatest;
            save=arr[ptr];
            arr[ptr]=greatest;
            ptr--;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};