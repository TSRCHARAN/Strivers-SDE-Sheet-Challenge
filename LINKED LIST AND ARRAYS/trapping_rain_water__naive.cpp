#include <bits/stdc++.h>
long getTrappedWater(long *arr, int n)
{
    long watertrapped = 0;
    for(int i=0; i<n; i++)
    {
        long maxLeft = 0;
        for(int j=0; j<=i; j++)
        {
            maxLeft = max(maxLeft,arr[j]);
        }
        long maxRight = 0;
        for(int j=i; j<n; j++)
        {
            maxRight = max(maxRight,arr[j]);
        }

        watertrapped += min(maxLeft,maxRight)-arr[i];
    }
    return watertrapped;
}
