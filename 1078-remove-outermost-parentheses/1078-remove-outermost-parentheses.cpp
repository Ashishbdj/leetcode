class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string str="";
        int d=0;
        for(char c : s)
        {
            if(c=='(')
            {
                if(d>0)str+=c;
                d++;
            }else
            {
                d--;
                if(d>0)str+=c;
            }
        }
        return str;
    }
};