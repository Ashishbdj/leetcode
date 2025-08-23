#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        string word = "";
        for (char &ch : paragraph) {
            if (isalpha(ch)) {
                word += tolower(ch);
            } else if (!word.empty()) {
                if (!bannedSet.count(word))
                    freq[word]++;
                word = "";
            }
        }
        if (!word.empty() && !bannedSet.count(word))
            freq[word]++;

        string ans = "";
        int maxCount = 0;
        for (auto &p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                ans = p.first;
            }
        }
        return ans;
    }
};
