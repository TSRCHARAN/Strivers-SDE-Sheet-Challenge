#include <bits/stdc++.h>

void fun(string &s, string&ds, vector<string>&ans, int freq[])
{
    if(ds.size()==s.size())
    {
        ans.push_back(ds);
        return;
    }

    for(int i=0; i<s.size(); i++)
    {
        if(!freq[i])
        {
            ds.push_back(s[i]);
            freq[i]=1;
            fun(s,ds,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

vector<string> findPermutations(string &s)
{
    vector<string>ans;
    string ds;
    int freq[s.size()];
    for(int i=0; i<s.size(); i++) freq[i]=0;
    fun(s,ds,ans,freq);
    return ans;
}
