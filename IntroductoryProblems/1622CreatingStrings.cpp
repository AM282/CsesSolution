#include<bits/stdc++.h>
using namespace std;
void permutations(string prefix,string suffix,set<string> &ans)
{
	if(suffix.size()==0)
	{
		ans.insert(prefix);
		return;
	}
	for(int i=0;i<suffix.size();i++)
	{
		permutations(prefix+suffix[i],suffix.substr(0,i)+suffix.substr(i+1,suffix.size()-i),ans);
	}
}
int main()
{
	string str;
	cin>>str;
	set<string>ans;
	permutations("",str,ans);
	cout<<ans.size()<<"\n";
	for(string s:ans)
	   cout<<s<<"\n";
}
