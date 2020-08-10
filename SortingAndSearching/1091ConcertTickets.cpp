#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>arr(n);
	map<int,int>mp;
	for(int i=0;i<n;i++){
	   cin>>arr[i];
	   mp[arr[i]]++;
    }
	for(int j=0;j<m;j++)
	{
		int x;
		cin>>x;
		if(mp.size()==0)
		   cout<<"-1\n";
		else{
		auto it=mp.lower_bound(x);
		if(it==mp.begin() && it->first!=x)
		   cout<<"-1\n";
		else if(it==mp.begin())
		{
			cout<<it->first<<"\n";
			mp[x]--;
			if(mp[x]==0)
			   mp.erase(x);
		}
		else if(it==mp.end())
		{
			it--;
			cout<<it->first<<"\n";
			mp[it->first]--;
			if(it->second==0)
			   mp.erase(it->first);
		}
		else
		{
			if(it->first>x)
			   it--;
			cout<<it->first<<"\n";
			it->second--;
			if(it->second==0)
			   mp.erase(it->first);
			
		}
	}
	}
}
