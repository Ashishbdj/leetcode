class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0)
        {
            int rem = (columnNumber-1)%26;
            ans+=char(65+rem);
            columnNumber=(columnNumber-1)/26;
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};