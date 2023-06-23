#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m)
{
	vector<int>res(n+m);
	int i=0,j=0;
	int k = 0;
	while(i<n && j<m)
	{
		if(arr1[i]<=arr2[j])
		{
			res[k++]=arr1[i++];
		}
		else
		{
			res[k++]=arr2[j++];
		}
	}
	while(i<n)
	{
		res[k++]=arr1[i++];
	}
	while(j<m)
	{
		res[k++]=arr2[j++];
	}
	return res;
}
