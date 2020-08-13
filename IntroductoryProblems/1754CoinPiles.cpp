#include<bits/stdc++.h>
using namespace std;
bool isPossible(int a,int b)
{
	if(a==0 && b==0)
	   return true;
	if(a<=0 || b<=0)
	   return false;
	if(isPossible(a-1,b-2))
	   return true;
	if(isPossible(a-2,b-1))
	   return true;
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a==0 && b==0)
		   cout<<"YES\n";
		else if(a==0 || b==0)
		   cout<<"NO\n";
		else if(a<=b && b-a>a)
		   cout<<"NO\n";
		else if(b<=a && a-b>b)
		   cout<<"NO\n";
		else if((a+b)%3==0)
		   cout<<"YES\n";
		else
		   cout<<"NO\n";
//		if(isPossible(a,b))
//		   cout<<"YES\n";
//		else
//		   cout<<"NO\n";
	}
}
