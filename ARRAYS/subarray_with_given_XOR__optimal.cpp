#include <bits/stdc++.h>

int subarraysXor(vector<int> &a, int k)
{
    int xr = 0;
    int n = a.size();

    map<int, int> mpp;
    mpp[xr]++; // intial (0,1)

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        xr = xr ^ a[i];

        int x = xr ^ k;

        cnt += mpp[x];

        mpp[xr]++;
    }
    return cnt;
}
