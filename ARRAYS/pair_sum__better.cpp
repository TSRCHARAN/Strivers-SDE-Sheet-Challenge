#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   map<int, int> mp;
   vector<vector<int>> ans;
   int n = arr.size();
   for(int i = 0; i < n; i++)
   {
      int x = s-arr[i];
      if(mp.find(x) != mp.end())
      {
         int val = mp[x];
         while(val--)
         {
            int minn = min(x, arr[i]);
            int maxx = max(x, arr[i]);
            ans.push_back({minn, maxx});
         }
      }
      mp[arr[i]]++;
   }
   sort(ans.begin(), ans.end());
   return ans;
}
