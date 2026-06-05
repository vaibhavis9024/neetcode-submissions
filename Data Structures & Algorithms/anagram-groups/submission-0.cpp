class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        string org_word;
        for(string s : strs){
            org_word=s;
            sort(s.begin(), s.end());
            map[s].push_back(org_word);
        }
        for(const auto& [st, vec]:map){
            ans.push_back(vec);
        }
        return ans;
    

    }
};
