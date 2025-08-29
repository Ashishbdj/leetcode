class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int ss;
        stack<char>st;
        for(char c : s)
        {
            if(c == '(')
            {
                st.push('(');
                ss=st.size();
                ans = max(ans,ss);
            }else if(c==')')
            {
                st.pop();
            }
        }
        return ans;
    }
};