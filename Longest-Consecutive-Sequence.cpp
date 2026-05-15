1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        unordered_set<int> set;
5        for(int& n : nums){
6            set.insert(n);
7        }
8        int length = 0;
9        for(const int& n : set){
10            if(!set.contains(n-1)){
11                int end = n + 1;
12                while(set.contains(end)){
13                    end++;
14                }
15                length = max(length, end - n);
16            }
17        }
18        return length;
19    }
20};