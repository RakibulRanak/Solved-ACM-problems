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
		int ara[3];
		cin>>ara[0]>>ara[1]>>ara[2];
		sort(ara,ara+3);
		if(ara[0]+ara[1]>=ara[2]-1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}