class Solution {
    public:
    void queen(vector<string> &board,int r,int n,vector<vector<string>> &ans)
    {
        if(r==n)
        {
            ans.push_back({board});
            return;
        }

        for(int i=0;i<n;i++)
        {
            if(findPosition(board,r,i,n))
            {
                board[r][i]='Q';
                queen(board,r+1,n,ans);
                board[r][i]='.';
            }
        }
    }
    bool findPosition(vector<string>&board,int r,int c,int n)
    {
        //horizontal
        for(int i=0;i<n;i++)
        {
            if(board[r][i]=='Q')
                return false;
        }
    //vertical
        for(int j=0;j<n;j++)
        {
            if(board[j][c]=='Q')
                return false;
        }
    //Diagonal
        for(int i=r,j=c;i>=0&&j>=0;i--,j--)
        {
            if(board[i][j]=='Q')
                return false;
        }

        for(int i=r,j=c;i>=0&&j<n;i--,j++)
        {
            if(board[i][j]=='Q')
                return false;
        }

        return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        queen(board,0,n,ans);
        return ans;
    }
};