class Solution {
public:
    int reverse(int x) {
        int temp=x,r;
        long long n=0;
        while(x!=0)
        {
            r=x%10;
            n=(n*10)+r;
            if(n>INT_MAX||n<INT_MIN) return 0;
            x=x/10;
        }
        return n;
    }
};