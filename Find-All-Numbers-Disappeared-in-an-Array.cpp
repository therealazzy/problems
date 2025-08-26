class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        vector<int> missing;
        for(int i = 0; i < n.size(); ++i){
           int current = abs(n[i]);
           if(n[current - 1] > 0){
            n[current-1] = -n[current-1];
           }
        }
        for(int i = 0; i < n.size(); ++i){
            if(n[i] > 0){
                missing.push_back(i+1);
            }
        }
        return missing;
    }
};