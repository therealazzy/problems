class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& n) {
        vector<int> smaller;
        
        vector<int> sorted = n; 
        sort(sorted.begin(), sorted.end());
        unordered_map<int, int> seen;
        for(int i = 0; i < sorted.size(); ++i){
            if(!seen.count(sorted[i])){
                seen[sorted[i]] = i;
            }
        }
        for(int i = 0; i < n.size(); ++i){
            smaller.push_back(seen[n[i]]);
        }

        return smaller;
    }
};