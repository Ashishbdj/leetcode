class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,right=m-1;
        int left=0,buttom=n-1;
        vector<int> spiral;
while(top<=buttom && left <= right)
{
        for(int i=left;i<=right;i++)
        {
            spiral.push_back(matrix[top][i]);
        }
        top++;
        for(int i= top;i<=buttom;i++)
        {
            spiral.push_back(matrix[i][right]);
        }
        right--;
        if(top<=buttom)
        {
        for(int i=right;i>=left;i--)
        {
            spiral.push_back(matrix[buttom][i]);
        }
        buttom--;
        }
        if(left<=right)
        {
        for(int i=buttom;i>=top;i--)
        {
            spiral.push_back(matrix[i][left]);
        }
        left++;
        }

    }
    return spiral;
    }
};