#include <bits/stdc++.h>
void fun(int ind, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds)
{
    ans.push_back(ds);
    for(int i=ind; i<arr.size(); i++)
    {
        if(i!=ind && arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        fun(i+1,arr,ans,ds);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>ds;
    fun(0,arr,ans,ds);
    return ans;
}
