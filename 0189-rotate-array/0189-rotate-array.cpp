class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // handle cases where k > n
        if (k == 0) return;

        int s = n - 1;
        vector<int> temp;

        // Store last k elements in temp
        for (int i = 0; i < k; i++) {
            temp.push_back(nums[s - i]);
        }

        // Shift the rest of the elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Put back k elements from temp in reverse order
        for (int i = 0; i < k; i++) {
            nums[i] = temp[k - 1 - i];
        }
    }
};
