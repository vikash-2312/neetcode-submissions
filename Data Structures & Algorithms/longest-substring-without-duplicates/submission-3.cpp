class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_map<char,int>freq;
        int count = 0;
        for (int r = 0; r<s.size(); r++) {
             freq[s[r]]++;
            while (freq[s[r]] > 1) {
                freq[s[left]]--;
                left++;
            }
           
            count = max(count, r - left + 1);
        }
        return count;
    }
};
