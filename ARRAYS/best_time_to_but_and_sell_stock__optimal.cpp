#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int n = prices.size();

    int mini = INT_MAX;
    int maxProfit = 0;

    for(int i=0; i<n; i++)
    {
        mini = min(mini,prices[i]);
        maxProfit = max(maxProfit,prices[i]-mini);
    }
    return maxProfit;
}
