void solve(int col, vector<vector<int>>&board, vector<vector<int>>&ans, vector<int>&leftrow, vector<int>&upperDiagonal, vector<int>&lowerDiagonal, int n)
{
      if (col == n)
      {
            vector<int>temp;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    temp.push_back(board[i][j]);
                }
            }
            ans.push_back(temp);
            return;
      }
      for (int row = 0; row < n; row++)
      {
        if (leftrow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0)
        {
            board[row][col] = 1;
            leftrow[row] = 1;
            lowerDiagonal[row + col] = 1;
            upperDiagonal[n - 1 + col - row] = 1;
            solve(col + 1, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
            board[row][col] = 0;
            leftrow[row] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
        }
      }
    }

vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n,0));

    vector < int > leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
    solve(0, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
    return ans;
}
