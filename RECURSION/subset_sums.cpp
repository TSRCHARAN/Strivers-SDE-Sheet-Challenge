void fun(int ind, vector < int > & arr, int n, vector < int > & ans, int sum)
{
      if (ind == n)
	  {
        ans.push_back(sum);
        return;
      }
      //element is picked
      fun(ind + 1, arr, n, ans, sum + arr[ind]);
      //element is not picked
      fun(ind + 1, arr, n, ans, sum);
    }

vector<int> subsetSum(vector<int> &arr)
{
	vector < int > ans;
	int n = arr.size();
    fun(0, arr, n, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}
