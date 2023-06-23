#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    int maxi = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                sum+=arr[k];
            }
            maxi = max(sum,maxi);
        }
    }
    return maxi;
}
