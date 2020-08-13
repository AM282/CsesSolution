#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	map<char,int>mp;
	for(char ch:str)
	   mp[ch]++;
	string ans="";
	string last="";
	bool flag=true;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		int cnt=it->second;
		if(cnt%2!=0 &&flag)
		{
			last+=string(cnt,it->first);
			flag=false;
		}
		else if(cnt%2!=0)
		{
			cout<<"NO SOLUTION\n";
			return 0;
		}
		else
		{
			ans+=string(cnt/2,it->first);
		}
	}
	last=ans+last;
	reverse(ans.begin(),ans.end());
	ans=last+ans;
	cout<<ans<<"\n";
}
