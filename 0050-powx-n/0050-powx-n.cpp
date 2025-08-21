class Solution {
public:
    double fun(double x, long long n)
    {
        if(n==0)
            return 1;
        if (n % 2 == 0)
        {
            return fun(x*x , n/2);

        } else 
        {
            return x * fun(x , n-1);  
        } 
    }
    double myPow(double x, int n) {
        long long n1=n;
        if(n<0)
        {
            n1=-n1;
            return 1/fun(x,n1);;
        }
        return fun(x,n1);;
    }
};