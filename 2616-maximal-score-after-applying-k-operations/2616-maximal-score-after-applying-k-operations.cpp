class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>heap(nums.begin(),nums.end());
        long long score=0;
        while(k>0)
        {
            double data =heap.top();
            heap.pop();
            score+=data;
            heap.push(ceil(data/3));
            k--;
        }
        return score;
    }
};