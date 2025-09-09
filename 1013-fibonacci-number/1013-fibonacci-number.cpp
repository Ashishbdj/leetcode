class Solution {
public:
    int fib(int n) {
        int p=1,pp=0,ans=0;
        if(n==1) return 1;
        for(int i=2;i<=n;i++)
        {
            ans=p+pp;
            pp=p;
            p=ans;
        }
        return ans;
    }
};