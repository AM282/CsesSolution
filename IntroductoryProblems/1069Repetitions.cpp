#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n=str.size();
	int i=0;
	map<char,int>mp;
	int ans=0;
	while(i<n)
	{
		mp[str[i]]++;
		if(mp.size()==1)
		{
			auto it=mp.begin();
			ans=max(ans,it->second);
		}
		else
		{
			int x=mp[str[i]];
			mp.clear();
			mp[str[i]]=x;
		}
		i++;
	}
	cout<<ans;
}
