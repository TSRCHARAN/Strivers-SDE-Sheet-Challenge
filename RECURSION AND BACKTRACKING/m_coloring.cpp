bool isPossible(int node, vector<vector<int>>&mat, int col[], int n, int i)
{
    for(int k=0; k<n; k++)
    {
        if(k!=node && mat[k][node]==1 && col[k]==i)
        {
            return false;
        }
    }
    return true;
}

bool fun(int node, int color[],int m, int n, vector<vector<int>>&mat)
{
    if(node==n)
    {
        return true;
    }

    for(int i=1; i<=m; i++)
    {
        if(isPossible(node,mat,color,n,i))
        {
            color[node] = i;
            if(fun(node+1,color,m,n,mat)) return true;
            color[node] = 0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m)
{
    int n = mat.size();
    int color[n] = {0};
    if(fun(0,color,m,n,mat))
        return "YES";
    return "NO";
}
