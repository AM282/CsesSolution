#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"0\n";
		return 0;
	}
	if(n==2)
	{
		cout<<"0\n6\n";
		return 0;
	}
	else
	{
		cout<<"0\n6\n";
		int prev=0;
		for(int i=3;i<=n;i++)
		{
			int ans=0;
			int a=i*i;
			int b=prev+8*(i-2);
			if(a%2==0){
			   ans=a/2;
			   cout<<ans*(a-1)-b<<"\n";
		    }
		    else
		    {
		    	ans=(a-1)/2;
		    	cout<<a*ans-b<<"\n";
			}
			prev=b;
		}
	}
}
