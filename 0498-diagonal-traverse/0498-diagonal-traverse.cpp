class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
     bool up =true;
     vector<int>ans;
     int n=mat.size(),r=0;
     int m=mat[0].size(),c=0;
     while(r < n && c < m)
     {
        if(up)
        {
            while(r>0&&c<m-1)
            {
               ans.push_back(mat[r][c]);
                r--;
                c++;
            }
            ans.push_back(mat[r][c]);
            if(c==m-1)
            {
                r++;
                up=false;
            }else{
                c++;
                up=false;
            }
        }else
        {
            while(r<n-1&&c>0)
            {
                ans.push_back(mat[r][c]);
                r++;
                c--;
            }
            ans.push_back(mat[r][c]);
            if(r==n-1)
            {
                c++;
                up=true;
            }else
            {
                r++;
                up=true;
            }
        }
     }
     return ans;
    }
};