#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi = 0;
    long long sum = 0;

    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi = sum;
        }
        if(sum<0)
        {
            sum = 0;
        }
    }
    return maxi;
}

# PRINTING MAXIMUM SUBARRAY
#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long maxi = 0;
    long long sum = 0;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for(int i=0; i<n; i++)
    {
        if(sum==0)
        {
            start = i;
        }
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0)
        {
            sum = 0;
        }
    }
    return maxi;
}
