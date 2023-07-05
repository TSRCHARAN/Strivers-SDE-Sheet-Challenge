void fun(int ind, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds)
{
    if(ind==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back(arr[ind]);
    fun(ind+1,target-arr[ind],arr,ans,ds);
    ds.pop_back();
    fun(ind+1,target,arr,ans,ds);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>>ans;
    vector<int>ds;
    fun(0,k,arr,ans,ds);
    return ans;
}
