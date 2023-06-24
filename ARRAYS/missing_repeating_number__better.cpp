#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int hash[n+1] = {0};
	int missing = -1;
	int repeating = -1;

	for(int i=0; i<n; i++)
	{
		hash[arr[i]]++;
	}

	for(int i=1; i<=n; i++)
	{
		if(hash[i]==2)
			repeating = i;
		else if(hash[i]==0)
			missing = i;
	}
    return {missing, repeating};
}
