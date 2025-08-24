class Solution {
public:
    void reverseString(vector<char>& s) {
        char ch;
        int l=0,r=s.size()-1;
        while(l<r)
        {
            ch=s[l];
            s[l]=s[r];
            s[r]=ch;
            l++;
            r--;
        }
    }
};