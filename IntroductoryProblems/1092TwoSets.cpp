#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n;
	cin>>n;
	int sum;
	if(n%2==0)
	{
		sum=n/2;
		sum*=(n+1);
	}
	else{
	   sum=(n+1)/2;
	   sum*=n;
    }
    if(sum%2!=0)
    {
    	cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
		int i=1,j=n;
		vector<int>s1,s2;
		if(n%2!=0){
		while(i<j)
		{
			if(i%2==0)
			{
				s1.push_back(j);
				s2.push_back(i);
			}
			else{
			    s1.push_back(i);
			    s2.push_back(j);
			}
			i++;
			j--;
		}
		s1.push_back(i);
	    }
	    else
	    {
	    	while(i<j)
	    	{
	    		if(i%2==0)
	    		{
	    			s2.push_back(i);
	    			s2.push_back(j);
				}
				else
				{
					s1.push_back(i);
					s1.push_back(j);
				}
				i++;
				j--;
			}
		}
		
		cout<<s1.size()<<"\n";
		for(int i=0;i<s1.size();i++)
		   cout<<s1[i]<<" ";
		cout<<"\n"<<s2.size()<<"\n";
		for(int i=0;i<s2.size();i++)
		   cout<<s2[i]<<" ";
	}
}

