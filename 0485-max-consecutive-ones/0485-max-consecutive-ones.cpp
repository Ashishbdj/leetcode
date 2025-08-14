class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0, maxCount = 0;
        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = std::max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        return maxCount;
    }
};
