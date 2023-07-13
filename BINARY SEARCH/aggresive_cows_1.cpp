#include <bits/stdc++.h>

bool isCompatible(vector < int > inp, int dist, int cows)
{
  int n = inp.size();
  int k = inp[0];
  cows--;
  for (int i = 1; i < n; i++)
  {
    if (inp[i] - k >= dist)
	{
      cows--;
      if (!cows)
	  {
        return true;
      }
      k = inp[i];
    }
  }
  return false;
}

int chessTournament(vector<int> positions , int n ,  int c)
{
	sort(positions.begin(), positions.end());
	int maxD = positions[n - 1] - positions[0];
	int ans = INT_MIN;
	for (int d = 1; d <= maxD; d++)
	{
		bool possible = isCompatible(positions, d, c);
		if (possible)
		{
			ans = max(ans, d);
		}
	}
	return ans;
}
