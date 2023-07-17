#include<bits/stdc++.h>
string reverseString(string &s)
{
	int n = s.size();

	int left = 0;
	while(left<n && s[left]==' ') left++;

	int right = n-1;
	while(right>=0 && s[right]==' ') right--;

	string res = "";
	string word = "";

	for(int i=left; i<=right; i++)
	{
		if(s[i]==' ')
		{
			if(res!="")
			{
				res = word + " " + res;
			}
			else
			{
				res = word;
			}

			word = "";
		}
		else
		{
			word+=s[i];
		}
	}

	if(res=="")
	{
		res = word;
	}
	else
	{
		res = word + " " + res;
	}
	return res;

}
