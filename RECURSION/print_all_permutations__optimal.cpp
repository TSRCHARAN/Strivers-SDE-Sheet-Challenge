#include <bits/stdc++.h>
void fun(int ind, string &s, vector<string>&ans)
{
    if(ind==s.size())
    {
        ans.push_back(s);
        return;
    }
    for(int i=ind; i<s.size(); i++)
    {
        swap(s[i],s[ind]);
        fun(ind+1,s,ans);
        swap(s[i],s[ind]);
    }
}

vector<string> findPermutations(string &s)
{
    vector<string>ans;
    fun(0,s,ans);
    return ans;
}
