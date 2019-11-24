#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		long long int a,b,dis,ans=0;
		cin>>a>>b;
		dis=abs(a-b);
		int temp=dis/5;
		ans+=temp;
		dis=dis-(5*temp);
		temp=(dis/2);
		ans+=temp;
		dis=dis-(temp*2);
		ans+=dis;
		cout<<ans<<endl;
	}
	return 0;
}