class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> C(m + n);

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                C[k] = nums1[i];
                i++;
            } else {
                C[k] = nums2[j];
                j++;
            }
            k++;
        }
        while (i < m) {
            C[k] = nums1[i];
            i++;
            k++;
        }

        while (j < n) {
            C[k] = nums2[j];
            j++;
            k++;
        }
        for (int k = 0; k < m + n; k++) {
            nums1[k] = C[k];
        }
    }
};
