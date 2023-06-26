#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   sort(arr.begin(), arr.end());

   int n = arr.size();

   vector<vector<int>>ans;

   for(int i=0;i<n-1;i++)
   {

      vector<int>temp;

      for(int j=i+1;j<n;j++)
      {

         if(arr[i]+arr[j]==s)
         {

            temp.push_back(arr[i]);

            temp.push_back(arr[j]);

            ans.push_back(temp);

         }

         if(arr[i]+arr[j]>s)
         {

            break;

         }

      }



   }

   return ans;
}
