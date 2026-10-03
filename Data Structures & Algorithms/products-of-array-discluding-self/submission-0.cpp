class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        int count = 0;

        vector<int> l(n, 1);
        vector<int> r(n, 1);
        vector<int> ans(n);

        // Count zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                count++;
        }

        // More than one zero
        if (count > 1) {
            return ans;
        }

        // Left product
        for (int i = 1; i < n; i++) {
            l[i] = l[i - 1] * nums[i - 1];
        }

        // Right product
        for (int i = n - 2; i >= 0; i--) {
            r[i] = r[i + 1] * nums[i + 1];
        }

        // Combine
        for (int i = 0; i < n; i++) {
            ans[i] = l[i] * r[i];
        }

        return ans;
    }
};