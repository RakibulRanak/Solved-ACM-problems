#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int can,p;
		cin>>can>>p;
		int ans=can/p;
		int temp=ans*p;
		ans=temp;
		int baki=can-temp;
		int high=p/2;
		ans+=min(high,baki);
		cout<<ans<<endl;
	}

	
}