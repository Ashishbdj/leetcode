class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size(),i;
        if(n!=m)
        {return false;}

       for(int i=0;i<n;i++)
       {
           char first = s[0];
            string rotated = s.substr(1) + first; 
            s = rotated; // update s
            if(s==goal)
                return true;
       }
        return false;
    }
};