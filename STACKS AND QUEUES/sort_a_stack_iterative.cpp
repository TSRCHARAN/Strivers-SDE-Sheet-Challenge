#include <bits/stdc++.h>
void sortStack(stack<int> &stack)
{
	std::stack<int> tmpStack;

	while(!stack.empty())
	{
		int tmp;
		tmp = stack.top();
		stack.pop();

		while(!tmpStack.empty() && tmpStack.top()>tmp)
		{
			stack.push(tmpStack.top());
			tmpStack.pop();
		}

		tmpStack.push(tmp);
	}

	stack = tmpStack;
}
