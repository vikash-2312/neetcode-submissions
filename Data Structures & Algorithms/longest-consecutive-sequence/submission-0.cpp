class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int>s;
        for(int i =0 ; i<nums.size();i++){
           s.insert(nums[i]);
        }
        int ans =0;
        for(int i =0 ; i<nums.size();i++){
           int x = nums[i];
           int count =1;
           if(s.find(x-1) != s.end()){
            continue;
           }
          else{
              while(s.find(x+1) !=s.end()){
                count++;
                x++;
              }
          }
          ans = max(ans,count);
        }
  return ans;  }
};
