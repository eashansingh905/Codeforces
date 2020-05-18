#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll test;
	cin>>test;
	while(test--)
	{
		ll n,m;
		cin>>n>>m;
		ll s=0;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			s=s+x;
		}
		cout<<min(s,m)<<"\n";
	}
	return 0;
}
