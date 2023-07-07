#include <bits/stdc++.h>

void fun(int i, int j, vector<vector<int>>&maze, int n, vector<vector<int>>&ans, vector<vector<int>>&vis, int di[], int dj[])
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

    for (int ind=0; ind<4; ind++)
    {
        int new_i = i + di[ind];
        int new_j = j + dj[ind];

        if(new_i>=0 && new_i<n && new_j>=0 && new_j<n && !vis[new_i][new_j] && maze[new_i][new_j]==1)
        {
            vis[new_i][new_j] = 1;
            fun(new_i, new_j, maze,n, ans, vis, di, dj);
            vis[new_i][new_j] = 0;
        }
    }
}

vector<vector<int>>ratInAMaze(vector<vector<int>>&maze, int n)
{
    vector<vector<int>>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    int di[] = {+1,0,0,-1};
    int dj[] = {0,-1,+1,0};
    vis[0][0] = 1;
    if(maze[0][0]==1) fun(0,0,maze,n, ans,vis,di,dj);
    return ans;
}
