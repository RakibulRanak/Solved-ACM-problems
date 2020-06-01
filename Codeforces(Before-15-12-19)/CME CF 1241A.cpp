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
		int n;
		cin>>n;
		int x=(n-1)/2;
		if(x==0)
			x=1;
		long long ans=2*(x+1)-n;
		cout<<ans<<endl;
	}
}