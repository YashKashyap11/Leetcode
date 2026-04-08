class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        unordered_set<int> s(candyType.begin(), candyType.end());
        
        int doc = candyType.size() / 2;

        return ((s.size() >= doc) ? doc : s.size());

    }
};