#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int>a)
{
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;
    int n = a.size();
    for(int i = 0;i<n;i++)
    {
        sum += a[i];
        if(sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if(mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }

    return maxi;
}
