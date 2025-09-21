class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int ans = 0;

        // Step 1: Skip trailing spaces
        int i = n - 1;
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: Count the last word
        while(i >= 0 && s[i] != ' ') {
            ans++;
            i--;
        }

        return ans;
    }
};
