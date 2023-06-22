#include <bits/stdc++.h>
vector<long long int>generateRow(int row)
{
    long long ans = 1;
    vector<long long int>res;
    res.push_back(ans);
    for(int col=1; col<row; col++)
    {
        ans = ans*(row-col);
        ans = ans/col;
        res.push_back(ans);
    }
    return res;
}

vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>>ans;
    for(int row=1; row<=n; row++)
    {
        ans.push_back(generateRow(row));
    }
    return ans;
}
