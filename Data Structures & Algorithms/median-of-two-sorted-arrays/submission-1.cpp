class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size() + nums2.size();

        int i = 0, j = 0;
        int k = 0;

        int ele1 = 0, ele2 = 0;

        while (i < nums1.size() && j < nums2.size()) {

            int x;

            if (nums1[i] < nums2[j]) {
                x = nums1[i];
                i++;
            }
            else {
                x = nums2[j];
                j++;
            }

            if (k == n / 2 - 1)
                ele1 = x;

            if (k == n / 2)
                ele2 = x;

            k++;
        }

        while (i < nums1.size()) {

            int x = nums1[i];
            i++;

            if (k == n / 2 - 1)
                ele1 = x;

            if (k == n / 2)
                ele2 = x;

            k++;
        }

        while (j < nums2.size()) {

            int x = nums2[j];
            j++;

            if (k == n / 2 - 1)
                ele1 = x;

            if (k == n / 2)
                ele2 = x;

            k++;
        }

        if (n % 2 == 0)
            return (ele1 + ele2) / 2.0;

        return ele2;
    }
};