#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	sort(arr.begin(),arr.end());
	vector<int>apr(m);
	for(int i=0;i<m;i++)
	   cin>>apr[i];
	sort(apr.begin(),apr.end());
	int ans=0,j=0;
	int i=0;
	while(i<n && j<m)
	{
		if(arr[i]-k>apr[j])
		{
			j++;
		}
		else if(arr[i]+k<apr[j])
		{
			i++;
		}
		else
		{
			i++;
			j++;
			ans++;
		}
	}
	cout<<ans<<"\n";
}
