#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	sort(arr.begin(),arr.end());
	int i=0,j=n-1,ans=0;
	while(i<=j)
	{
		int sum=arr[i]+arr[j];
		if(sum<=x)
		{
			ans++;
			i++;
			j--;
		}
		else
		{
		   ans++;
		   j--;	
		}
	}
	cout<<ans<<"\n";
}
