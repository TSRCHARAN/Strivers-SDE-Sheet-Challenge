#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m)
{
	int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m)
	{
        if (arr1[left] > arr2[right])
		{
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else
		{
            break;
        }
    }

    sort(arr1.begin(), arr1.begin()+n);
    sort(arr2.begin(), arr2.begin()+m);

    vector<int>res;
    for(int i=0; i<n; i++)
    {
        res.push_back(arr1[i]);
    }
    for(int i=0; i<m; i++)
    {
        res.push_back(arr2[i]);
    }
	return res;
}
