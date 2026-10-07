class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int ans = 0;
        int left = 0;
        int maxf = 0;

        for(int right = 0; right < s.size(); right++) {
            mp[s[right]]++;
            maxf = max(maxf, mp[s[right]]);

            while((right - left + 1) - maxf > k) {
                mp[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};