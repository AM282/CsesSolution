#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1){
	   cout<<"1\n";
	   return 0;
    }
	if(n<4){
	  cout<<"NO SOLUTION\n";
	  return 0;
    }
	list<int> ls;
	ls.push_back(3);
	ls.push_back(1);
	ls.push_back(4);
	ls.push_back(2);
	if(n==4)
	{
	for(auto it=ls.begin();it!=ls.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
	}
	for(int i=5;i<=n;i++)
	{
		if(i%2==0)
		  ls.push_back(i);
		else
		  ls.push_front(i);
		
	}
	for(auto it=ls.begin();it!=ls.end();it++)
	{
		cout<<*it<<" ";
	}
}

