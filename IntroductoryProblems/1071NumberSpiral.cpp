#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int ans;
		if(x<y)
		{
			if(y%2==0)
			{
				ans=(y-1)*(y-1)+1;
				while(x!=1){
				   ans++;
				   x--;
			    }
			}
			else
			{
				ans=y*y;
				while(x!=1){
				   ans--;
				   x--;
			    }
			}
		}
		else
		{
			if(x%2==0)
			{
				ans=x*x;
				while(y!=1)
				{
					ans--;
					y--;
				}
			}
			else
			{
				ans=(x-1)*(x-1)+1;
				while(y!=1)
				{
					ans++;
					y--;
				}
			}
		}
		cout<<ans<<"\n";
	}
}
