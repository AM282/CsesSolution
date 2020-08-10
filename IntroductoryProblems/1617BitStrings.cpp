#include<bits/stdc++.h>
#define int long long
using namespace std;
int m=1000000007;
int32_t main()
{
	int n;
	cin>>n;
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		ans=(ans*2)%m;
		ans=ans%m;
	}
	cout<<ans<<"\n";
}

