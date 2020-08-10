#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	int prev=arr[0];
	int ans=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>=prev)
		{
			prev=arr[i];
			continue;
		}
		else
		{
			ans+=prev-arr[i];
		}
	}
	cout<<ans<<"\n";
}
