#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    int count = 0;
	int el;

	for(int i=0; i<n; i++)
	{
		if(count == 0)
		{
			count = 1;
			el = arr[i];
		}
		else if(el==arr[i])
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	int cnt1 = 0;
	for(int i=0; i<n; i++)
	{
		if(el==arr[i])
		{
			cnt1++;
		}
	}
	if(cnt1>(n/2))
	{
		return el;
	}
	return -1;
}
