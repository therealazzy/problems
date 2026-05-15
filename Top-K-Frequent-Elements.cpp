1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        vector<int> res(k);
5        unordered_map<int, int> freq;
6        priority_queue<pair<int, int>> pq;
7
8        for(int& n : nums){
9            freq[n]++;
10        }
11        for(auto& p : freq){
12            pq.push(make_pair(p.second, p.first));
13        }
14        for(auto& r : res){
15            r = pq.top().second;
16            pq.pop();
17        }
18
19        return res;
20    }
21};