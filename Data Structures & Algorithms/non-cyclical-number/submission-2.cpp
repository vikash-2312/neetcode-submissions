class Solution {
public:

    int helper(int n) {
        int sum = 0;

        while(n > 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        set<int> st;

        while(n != 1 && st.find(n) == st.end()) {
            st.insert(n);
            n = helper(n);
        }

        return n == 1;
    }
};