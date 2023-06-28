#include <bits/stdc++.h>

int subarraysXor(vector<int> &a, int x)
{
    int n = a.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int xorr = 0;
            for (int K = i; K <= j; K++)
            {
                xorr = xorr ^ a[K];
            }

            if (xorr == x) cnt++;
        }
    }
    return cnt;
}
