#include<bits/stdc++.h>
string reverseString(string &str)
{
	stack<string>st;
	string s = "";

	int n = str.size();

	int left = 0;
	while(left<n && str[left]==' ') left++;

	int right = n-1;
	while(right>=0 && str[right]==' ') right--;

	for(int i=left; i<=right; i++)
	{
		if(str[i]==' ')
		{
			st.push(s);
			s = "";
		}
		else
		{
			s+=str[i];
		}
	}
	st.push(s);

	string res = "";
	while(st.size()>1)
	{
		res+=st.top()+" ";
		st.pop();
	}
	res+=st.top();
	st.pop();

	return res;
}
