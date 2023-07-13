double median(vector<int>& a, vector<int>& b)
{
	int n=a.size();
	int m=b.size();
	vector<int>c(n+m);
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	if(i<n)
	{
		while(i<n)
		{
			c[k++] = a[i++];
		}
	}
	else
	{
		while(j<m)
		{
			c[k++] = b[j++];
		}
	}

	n = (n+m);
	if(n%2==0)
	{
		double ans = (c[(n/2)]+c[(n/2)-1])/2.0;
		return ans;
	}
	else
	{
		double ans = c[(n+1)/2-1];
		return ans;
	}
}
