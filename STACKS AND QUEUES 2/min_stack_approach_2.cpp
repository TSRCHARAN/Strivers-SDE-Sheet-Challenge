#include<bits/stdc++.h>
class minStack
{
	public:
	stack<long long>st;
	long long mini=INT_MAX;
	minStack()
	{

	}
	// Function to add another element equal to num at the top of stack.
	void push(int num)
	{
		long long val=num;
		if(st.empty())
		{
			st.push(val);
			mini=val;
		}
		else
		{
			if(mini<val)
			    st.push(val);
			else
			{
				long long x = 2* val -mini;
                st.push(x);
				mini=val;
			}
		}
	}
	// Function to remove the top element of the stack.
	int pop()
	{
		if(st.empty())
			return -1;
		if(mini>st.top())
		{
			long long x=mini;
			mini=2*mini -st.top();
			st.pop();
			return x;
		}
		long long n = st.top();
		st.pop();
		return n;
	}
	// Function to return the top element of stack if it is present. Otherwise return -1.
	int top()
	{
		if(st.empty())
			return -1;
		if(st.top()<mini)
			return mini;
		return st.top();
	}
	// Function to return minimum element of stack if it is present. Otherwise return -1.
	int getMin()
	{
		if(st.empty())
			return -1;
	    return mini;
	}
};
