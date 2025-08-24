class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
         priority_queue<int> heap(nums.begin(), nums.end());
        long long score = 0;

        while (k--) {
            int top = heap.top();
            heap.pop();
            score += top;
            heap.push((top + 2) / 3); // integer ceil division
        }

        return score;
    }
};