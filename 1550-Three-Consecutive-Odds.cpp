class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
      int count = 0;
      if(arr.size() < 3) return false;
      for (const int a : arr){
        count = a%2 == 0 ? 0 : count+1;
        if( count == 3){
            return true;
            }
                            }    
      return false;
      
      
    }
};