#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
	{
        int cnt = 0;
        for (int j = 0; j < n; j++)
		{
            if (arr[j] == arr[i])
			{
                cnt++;
            }
        }
        if (cnt > (n / 2))
            return arr[i];
    }

    return -1;
}
