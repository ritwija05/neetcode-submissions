class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        unordered_map<char,int> frequency;
        //mapping character and frequency
        for(int i=0;i<s.length();i++)
        {
            frequency[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            frequency[t[i]]--;
        }
        for (auto entry: frequency)
        {
            if(entry.second != 0)
            return false;
        }
        return true;
    }
};
