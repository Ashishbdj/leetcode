class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int n=strs.size();
        if(n==0)
        {
            return "";
        }
        for(int i=1;i<n;i++)
        {
            int j=0;
           string ans1="";
            while(j<strs[i].size()&&j<ans.size()&&strs[i][j]==ans[j])
            {
                ans1+=strs[i][j];
                j++;
            }
            ans=ans1;
        }
        return ans;
    }
};