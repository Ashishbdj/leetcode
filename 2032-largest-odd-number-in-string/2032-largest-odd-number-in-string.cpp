class Solution {
public:
    string largestOddNumber(string num) {
        int odd=-1;
        string str="";
        for(int i=0;i<num.size();i++)
        {
            int v = int(num[i]);
            if(v%2==1)
            {
                odd=i;
            }
        }
        for(int i=0;i<=odd;i++)
        {
            str+=num[i];
        }
        return str;
    }
};