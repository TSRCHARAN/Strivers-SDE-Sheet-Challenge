#include <bits/stdc++.h>
int findMinimumCoins(int amount)
{
    int denomination[] = {1,2,5,10,20,50,100,500,1000};
    int n = 9;
    int cnt = 0;

    for(int i=n-1; i>=0;i--)
    {
        while(amount>=denomination[i])
        {
            amount-=denomination[i];
            cnt++;
        }
    }
    return cnt;
}
