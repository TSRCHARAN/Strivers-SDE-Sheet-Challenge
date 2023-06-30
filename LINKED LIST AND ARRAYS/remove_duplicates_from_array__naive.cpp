#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n)
{
	set<int> set;
	for (int i = 0; i < n; i++)
	{
		set.insert(arr[i]);
	}
	int k = set.size();
	return k;
}
