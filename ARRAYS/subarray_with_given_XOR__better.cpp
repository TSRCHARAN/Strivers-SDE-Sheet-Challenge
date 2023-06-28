#include <bits/stdc++.h>

int subarraysXor(vector<int> &a, int x)
{
    int n = a.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int xorr = 0;
        for (int j = i; j < n; j++)
        {
            xorr = xorr ^ a[j];

            if (xorr == x) cnt++;
        }
    }
    return cnt;
}
