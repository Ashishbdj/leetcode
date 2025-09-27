#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if (m > n) return "";

        vector<int> frq(256, 0);
        for (char c : t) frq[c]++;

        int l = 0, r = 0, count = 0;
        int minlen = INT_MAX, si = -1;

        while (r < n) {
            if (frq[s[r]] > 0) count++;
            frq[s[r]]--;
            r++;

            while (count == m) {
                if (r - l < minlen) {
                    minlen = r - l;
                    si = l;
                }
                frq[s[l]]++;
                if (frq[s[l]] > 0) count--;
                l++;
            }
        }
        return si == -1 ? "" : s.substr(si, minlen);
    }
};
