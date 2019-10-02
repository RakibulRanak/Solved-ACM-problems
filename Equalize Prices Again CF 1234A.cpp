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
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			sum+=temp;
		}
		long  long ans=(sum+(n-1))/n;
		cout<<ans<<endl;
	}
	return 0;
}