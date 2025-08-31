class Solution {
public:
    int reverse(int x) {
        int temp=x,r;
        long long n=0;
        while(x!=0)
        {
            r=x%10;
            n=(n*10)+r;
            if(n>2147483647||n<-2147483647) return 0;
            x=x/10;
        }
        return n;
    }
};