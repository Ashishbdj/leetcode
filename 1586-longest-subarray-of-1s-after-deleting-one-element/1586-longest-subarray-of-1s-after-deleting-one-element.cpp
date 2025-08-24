class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maximum = 0, l = 0, zerocount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) zerocount++;  // ✅ count zero at right side

            // shrink window until we have at most one zero
            while (zerocount > 1) {
                if (nums[l] == 0) zerocount--;
                l++;
            }

            // delete one element, so length is (i - l)
            maximum = max(maximum, i - l);
        }

        return maximum;
    }
};
