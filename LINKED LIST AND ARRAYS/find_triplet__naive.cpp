#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int>&nums, int n, int k)
{
	set<vector<int>>ans;

	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			for(int l = j + 1; l < n; l++)
			{
				if (nums[i] + nums[j] + nums[l] == k)
				{
					vector<int>temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					temp.push_back(nums[l]);
					sort(temp.begin(),temp.end());
					ans.insert(temp);
				}
			}
		}
	}

	vector<vector<int>>res(ans.begin(),ans.end());
	return res;
}
