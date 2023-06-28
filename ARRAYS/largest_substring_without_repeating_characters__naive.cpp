#include <bits/stdc++.h>
int uniqueSubstrings(string str)
{
    if(str.size()==0)
      return 0;

    int maxans = INT_MIN;
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        unordered_set < int > set;
        for (int j = i; j < n; j++)
        {
            if (set.find(str[j]) != set.end())
            {
                maxans = max(maxans, j - i);
                break;
            }
            set.insert(str[j]);
        }
    }
    return maxans;
}
