#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long maxi = 0;
    for(int i=0; i<n; i++)
    {
        long long sum = 0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}
