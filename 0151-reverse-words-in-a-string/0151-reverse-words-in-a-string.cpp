class Solution {
public:
    string reverseWords(string s) {
        string str=" ";
        string os="";
        for(char ch : s)
        {
            if(ch!=' ')
            {
                str+=ch;
            }else{
                if(str.size()>1)
                {
                    os=str+os;
                    str=" ";
                }
            }
        }
        if(str.size()>0)
        {
             os=str+os;
        }
        while(os[0]==' ')
        {
            os.erase(0,1);
        }
        return os;
    }
};