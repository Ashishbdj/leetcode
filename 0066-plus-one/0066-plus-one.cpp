class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // just add 1
                return digits; // done
            }
            digits[i] = 0;     // carry over
        }
        
        // If we reach here, number was like 999 → need one more digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
