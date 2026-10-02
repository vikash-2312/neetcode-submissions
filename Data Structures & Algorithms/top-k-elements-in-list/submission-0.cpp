class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        priority_queue<pair<int,int>> q;

        int count = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1]) {
                count++;
            }
            else {
                q.push({count, nums[i-1]});
                count = 1;
            }
        }

        // Add the last element
        q.push({count, nums[nums.size()-1]});

        vector<int> ans;

        while(!q.empty() && k > 0) {
            ans.push_back(q.top().second);
            q.pop();
            k--;
        }

        return ans;
    }
};