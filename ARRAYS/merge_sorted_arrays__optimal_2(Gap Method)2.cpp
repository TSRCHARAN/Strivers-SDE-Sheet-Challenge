#include <bits/stdc++.h>
void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int ind1, int ind2)
{
    if (arr1[ind1] > arr2[ind2])
    {
        swap(arr1[ind1], arr2[ind2]);
    }
}
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m)
{
    int len = n + m;

    // Initial gap:
    int gap = (len / 2) + (len % 2);

    // Resizing since it contains some extra values
    arr1.resize(n);

    while (gap > 0)
    {
        // Place 2 pointers:
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            // case 1: left in arr1[]
            //and right in arr2[]:
            if (left < n && right >= n)
            {
                swapIfGreater(arr1, arr2, left, right - n);
            }
            // case 2: both pointers in arr2[]:
            else if (left >= n)
            {
                swapIfGreater(arr2, arr2, left - n, right - n);
            }
            // case 3: both pointers in arr1[]:
            else
            {
                swapIfGreater(arr1, arr1, left, right);
            }
            left++, right++;
        }
        // break if iteration gap=1 is completed:
        if (gap == 1) break;

        // Otherwise, calculate new gap:
        gap = (gap / 2) + (gap % 2);
    }
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
