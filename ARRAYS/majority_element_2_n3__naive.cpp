#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    vector<int>res;
    for (int i = 0; i < n; i++)
    {
        if (res.size() == 0 || res[0] != arr[i])
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    cnt++;
                }
            }
            if (cnt > (n / 3))
                res.push_back(arr[i]);
        }

        if (res.size() == 2) break;
    }

    return res;
}
