#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	long long xorr=0;
	for(int i=0;i<n-1;i++){
	   cin>>arr[i];
	   xorr=xorr^arr[i];
    }
    long long x;
    if(n%4==0)
       x=n;
    else if(n%4==1)
       x=1;
    else if(n%4==2)
       x=n+1;
    else
       x=0;
    cout<<(x^xorr)<<"\n";
	
}
