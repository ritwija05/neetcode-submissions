class Solution {
public:
    bool hasDuplicate(vector<int>& myVector) {
        unordered_set<int> mySet(myVector.begin(), myVector.end());
        return mySet.size() != myVector.size();
    
    }
};
