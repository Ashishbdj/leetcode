class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int t=x,r;
        long long n=0;
        while(t!=0)
        {
            r=t%10;
            n=(n*10)+r;
            t=t/10;
        }
        if(x==n)
        return true;

        return false;
    }
};