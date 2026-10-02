class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        priority_queue<pair<int,int>> q;

        for(int i =0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }

        for(auto it = mp.begin() ; it !=mp.end() ; it++){
            q.push({it->second,it->first});
        }

       
        vector<int> ans;

        while(!q.empty() && k > 0) {
            ans.push_back(q.top().second);
            q.pop();
            k--;
        }

        return ans;
    }
};