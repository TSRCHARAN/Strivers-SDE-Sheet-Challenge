#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();

    vector<int> ls;
    map<int, int> mpp;

    int mini = int(n / 3) + 1;

    //storing the elements with its occurnce:
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i]] == mini)
        {
            ls.push_back(arr[i]);
        }
        if (ls.size() == 2) break;
    }

    return ls;
}
