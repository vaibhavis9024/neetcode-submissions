class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        for( string s: strs){
            string f;
            vector<int> frequency_array(26, 0);
            for(char c:s){
                frequency_array[static_cast<int>(c)-97]++;
            }
            for(int n:frequency_array){
                f.push_back((char)n);
                f.push_back('#');
            }
            map[f].push_back(s);
        }
        for(const auto & [key, value]: map){
            ans.push_back(map[key]);
        }
        return ans;
    }
};
