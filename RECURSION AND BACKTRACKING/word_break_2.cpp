#include <bits/stdc++.h>

void fun(int i, string & s, string & temp, vector<string>& ans, unordered_map<string,bool>& m)
{

    if(i==s.length())
    {
        ans.push_back(temp);
        return;
    }

    for(int ind = i; ind<s.length(); ind++)
    {

        int sz = temp.size();
        if(m[s.substr(i,(ind-i+1))])
        {
            temp.append(s.substr(i,(ind-i+1)));
            temp.push_back(' ');

            fun(ind+1,s,temp,ans,m);

            int size = temp.size();

            while(size!=sz)
            {
                temp.pop_back();
                size--;
            }
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    unordered_map<string,bool> m;

    for(auto i: dictionary) m[i] = true;

    vector<string> ans;

    string temp;

    fun(0,s,temp,ans,m);

    return ans;
}
