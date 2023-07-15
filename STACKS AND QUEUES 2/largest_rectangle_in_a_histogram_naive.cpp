#include<bits/stdc++.h>
int largestRectangle(vector < int > & arr)
{
    int maxArea = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      int minHeight = INT_MAX;
      for (int j = i; j < n; j++)
      {
          minHeight = min(minHeight, arr[j]);
          maxArea = max(maxArea, minHeight * (j - i + 1));
      }
    }
    return maxArea;
}
