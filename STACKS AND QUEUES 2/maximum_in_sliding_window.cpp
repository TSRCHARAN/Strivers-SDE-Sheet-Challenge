#include <bits/stdc++.h>
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    int n = nums.size();

    deque<int>dq;
    vector<int>ans;

    for(int i=0; i<n; i++)
    {
        // For window size
        if(!dq.empty() && dq.front()==i-k)
        {
            dq.pop_front();
        }

        // Elements of window should be greater... y use of storing smaller
        while(!dq.empty() && nums[dq.back()]<=nums[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);

        // Start storing after first k moves
        if(i>=k-1)
        {
            ans.push_back(nums[dq.front()]);
        }
    }

    return ans;
}
