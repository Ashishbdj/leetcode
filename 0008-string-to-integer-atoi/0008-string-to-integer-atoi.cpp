class Solution {
public:
    int myAtoi(string s) {
        int i=0,sign=1;
        int max=INT_MAX,min=INT_MIN;
        int ans=0;
        while(i<s.size()&&s[i]==' ')
            i++;
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
    sign = (s[i] == '-') ? -1 : 1;
    i++;
}

        
        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Check for overflow BEFORE updating ans
            if (ans > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }
        return int(sign*ans);
    }
};