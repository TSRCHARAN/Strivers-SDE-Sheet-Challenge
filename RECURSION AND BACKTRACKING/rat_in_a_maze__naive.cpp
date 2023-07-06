#include <bits/stdc++.h>

void fun(int i, int j, vector<vector<int>>&maze, int n, vector<vector<int>>&ans, vector<vector<int>>&vis)
{
    if(i==n-1 && j==n-1)
    {
        vis[i][j] = 1;
        vector<int>res;
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<n;j++)
            {
                res.push_back(vis[i][j]);
            }
        }
        ans.push_back(res);
        return;
    }

    if (i < 0 || i >= n || j < 0 || j >= n || vis[i][j] == 1 || maze[i][j] == 0)
    {
        return;
    }

    vis[i][j] = 1;

    // Down
    fun(i + 1, j, maze, n, ans, vis);
    // Left
    fun(i, j - 1, maze, n, ans, vis);
    // Right
    fun(i, j + 1, maze, n, ans, vis);
    // Up
    fun(i - 1, j, maze, n, ans, vis);

    vis[i][j] = 0;

}

vector<vector<int>>ratInAMaze(vector<vector<int>>&maze, int n)
{
    vector<vector<int>>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    if(maze[0][0]==1) fun(0,0,maze,n, ans,vis);

    return ans;
}
