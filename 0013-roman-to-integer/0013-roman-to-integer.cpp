class Solution {
public:
    int romanToInt(string s) {
        vector<int> data(256, 0);
        data['I'] = 1;
        data['V'] = 5;
        data['X'] = 10;
        data['L'] = 50;
        data['C'] = 100;
        data['D'] = 500;
        data['M'] = 1000;

        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            // If current value is less than next value, subtract it
            if (i + 1 < s.size() && data[s[i]] < data[s[i + 1]]) {
                ans -= data[s[i]];
            } else {
                ans += data[s[i]];
            }
        }
        return ans;
    }
};