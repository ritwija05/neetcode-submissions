class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagrams;
        for(int i =0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            anagrams[s].insert(anagrams[s].end(),strs[i]); // insert mei we need to specify the location thus at the end of the vector we insert
            //or use mp[s].push_back(strs[i]) this will append it to the same vector
        }
        vector<vector<string>> result;
        for(auto entry: anagrams)
        {
            result.push_back(entry.second);
        }
        return result;
    }
};
