#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int> >arr(n);
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[i]={x,y};
	}
	sort(arr.begin(),arr.end());
	int count=1,val=arr[0].second;
	for(int i=1;i<n;i++)
	{
		if(arr[i].first<val)
		{
			val=min(val,arr[i].second);
		}
		else
		{
			count++;
			val=arr[i].second;
		}
	}
	cout<<count<<"\n";
}
